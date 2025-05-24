#include "Functions_names.h"
#include <iomanip>  // Для std::setprecision
#include <limits>   // Для std::numeric_limits
#include <algorithm>
using namespace std;
// Инициализация констант
const double a = 0.0;
const double b = 2.0;
const double c = 0.0;
const double d = 1.0;

const double a_star = (b - a) / 4.0;
const double b_star = (b - a) / 2.0;
const double c_star = 3.0 * (b - a) / 4.0;
const double d_star = (d - c) / 4.0;
const double e_star = (d - c) / 2.0;
const double f_star = 3.0 * (d - c) / 4.0;

EXAMPLE_API void savetxt(const string& filename, const vector<vector<double>>& data) {
    ofstream out(filename);
    if (!out) throw runtime_error("Can't open file");
    out << fixed << setprecision(16);
    for (const auto& row : data) {
        for (size_t i = 0; i < row.size(); ++i) {
            if (std::isnan(row[i])) {
                out << "NaN"; // Или 0.0
            }
            else {
                out << row[i];
            }
            out << (i < row.size() - 1 ? " " : "");
        }
        out << "\n";
    }
}

bool border(int i, int j, int n, int m)
{
    double x = a + i * (b - a) / n;
    double y = c + j * (d - c) / m;

    if ((x == a && c <= y && y <= d) ||//mu1
        (x == b && c <= y && y <= e_star) ||//mu2
        (a <= x && x <= b && y == c) ||//mu3
        (a <= x && x <= b_star && y == d) ||//mu4
        (x == a_star && d_star <= y && y <= f_star) ||//mu5
        (x == c_star && d_star <= y && y <= e_star) ||//mu6 e_star
        (a_star <= x && x <= c_star && y == d_star) ||//mu7
        (a_star <= x && x <= b_star && y == f_star) ||//mu8
        (x == b_star && f_star <= y && y <= d) ||//mu9
        (c_star <= x && x <= b && y == e_star))//mu10 c_star
    {
        return true;
    }
    return false;
}

bool not_an_area(int i, int j, int n, int m)
{
    double x = a + i * (b - a) / n;
    double y = c + j * (d - c) / m;

    // (красная область)
    if (a_star < x && x < c_star && d_star < y && y < f_star) return true;
    // синяя область
    if (b_star < x && x <= b && f_star <= y && y <= d) return true;
    // зеленая область
    if (c_star <= x && x <= b && e_star < y && y <= f_star) return true;

    return false;
}

bool is_inner_point(int i, int j, int n, int m) {
    if (i <= 0 || i >= n || j <= 0 || j >= m) return false;
    return !border(i, j, n, m) && !not_an_area(i, j, n, m);
}

double u(double x, double y)
{
    double sin_pi_xy = sin(M_PI * x * y);
    double sin_squared = sin_pi_xy * sin_pi_xy;
    return exp(sin_squared);  // e^(sinВІ(ПЂxy))
}
double f(double x, double y)
{
    double sin_pi_xy = sin(M_PI * x * y);
    double sin_quad_pi_xy = sin_pi_xy * sin_pi_xy;
    double exp_sin_quad = exp(sin_quad_pi_xy);

    double sin_2pi_xy = sin(2 * M_PI * x * y);
    double cos_2pi_xy = cos(2 * M_PI * x * y);

    double d2u_dx2_d2u_dy2 = M_PI * M_PI * exp_sin_quad * (sin_2pi_xy * sin_2pi_xy + 2 * cos_2pi_xy) * (x * x + y * y);

    return -(d2u_dx2_d2u_dy2);
}

vector<vector<int>> classify(int n, int m) {
    vector<vector<int>> T(n + 1, vector<int>(m + 1, -1));
    // РЁР°Рі 1: РіСЂР°РЅРёС†Р° Рё В«РЅРµ_Р·РѕРЅР°В»
    for (int i = 0; i <= n; ++i)
        for (int j = 0; j <= m; ++j) {
            if (border(i, j, n, m))           T[i][j] = 0;
            else if (not_an_area(i, j, n, m)) T[i][j] = 5;
        }
    // РЁР°Рі 2: РІРЅСѓС‚СЂРµРЅРЅРёРµ С‚РѕС‡РєРё
    for (int i = 1; i < n; ++i)
        for (int j = 1; j < m; ++j) {
            if (T[i][j] == -1) {
                bool near = (T[i - 1][j] == 0 || T[i + 1][j] == 0 || T[i][j - 1] == 0 || T[i][j + 1] == 0);
                T[i][j] = near ? 2 : 1;
            }
        }
    return T;
}

double calc_eps(const vector<vector<double>>& R,
    const vector<vector<double>>& V,
    int n, int m,
    double h, double k,
    double& max_i, double& max_j)
{
    double max_diff = 0.0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            double diff = fabs(R[i][j] - V[i][j]);
            if (diff > max_diff) {
                max_diff = diff;
                max_i = i;
                max_j = j;
            }
        }
    return max_diff;
}
//для справки max|u*-v|
EXAMPLE_API double compute_max_error(const vector<vector<double>>& v,
    int n, int m,
    int& max_i, int& max_j) { // РџСЂРёРЅРёРјР°РµС‚ int&
    double max_error = 0.0;
    max_i = 0;
    max_j = 0;

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (border(i, j, n, m) || is_inner_point(i, j, n, m)) {
                double x = a + i * (b - a) / n;
                double y = c + j * (d - c) / m;
                double u_val = u(x, y);
                double error = abs(u_val - v[i][j]);
                if (error > max_error) {
                    max_error = error;
                    max_i = i; 
                    max_j = j; 
                }
            }
        }
    }
    return max_error;
}
EXAMPLE_API double calc_eps(const std::vector<std::vector<double>>& res,
    const std::vector<std::vector<double>>& v,
    int m, int n,
    double h, double k,
    double eps1,
    double& max_i,
    double& max_j)
{
    double max_diff = 0.0;

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            double diff = fabs(res[j][i] - v[j][i]);
            if (diff > max_diff) {
                max_diff = diff;
                max_i = i;
                max_j = j;
            }
        }
    }
    return max_diff;
}

EXAMPLE_API double compute_residual_norm(
    const vector<vector<double>>& v,
    const vector<vector<int>>& node_types,
    int n, int m,
    double h, double k
) {
    double sum_sq = 0.0;

    for (int i = 1; i < n; ++i) {       // Исключаем граничные узлы по x
        for (int j = 1; j < m; ++j) {     // Исключаем граничные узлы по y
            if (node_types[i][j] == 1 || node_types[i][j] == 2) {
                // РўРѕС‡РєР° (x, y)
                double x = a + i * h;
                double y = c + j * k;

                // Вычисление оператора Лапласа
                double d2v_dx2 = (v[i - 1][j] - 2 * v[i][j] + v[i + 1][j]) / (h * h);
                double d2v_dy2 = (v[i][j - 1] - 2 * v[i][j] + v[i][j + 1]) / (k * k);
                double Av = d2v_dx2 + d2v_dy2;

                // Невязка: res = f + Δv (для уравнения Δv + f = 0)
                double res = f(x, y) + Av;
                sum_sq += res * res;
            }
        }
    }

    return sqrt(sum_sq);// Евклидова норма
}
EXAMPLE_API double compute_max_diff(
    const vector<vector<double>>& v_new,
    const vector<vector<double>>& v,
    const vector<vector<int>>& node_types,
    int n, int m
) {
    double max_diff = 0.0;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (node_types[i][j] == 1 || node_types[i][j] == 2) {
                double diff = fabs(v_new[i][j] - v[i][j]);
                if (diff > max_diff) {
                    max_diff = diff;
                }
            }
        }
    }
    return max_diff;
}

//нахождение оценок для минимального и максимального собственного числа 
// 1. Расчет параметров метода
    //У нас априори получится симметричная, невырожденная, положительно определенная матрица, поэтому в каждой ее строке максимум 5 элементов
    //На диагонали всегда стоит элемент со значением 2.0*(1.0/(h2)+1.0/(k2))
    //Для внутреннего узла 1 типа в строке 5 элементов, то есть есть 4 соседа, сумма модулей которых равна 2.0*(1.0/(h2)+1.0/(k2))
    //Тогда по теореме Горшгорина собственные числа лежат в интервале [0,4.0*(1.0/(h2)+1.0/(k2))]
    //Таким образом оценка сверху: M_max=4.0*(1.0/(h2)+1.0/(k2))
    //Оценка снизу M_min=0 неэффективна и невозможна, так как нет нулевого собственного числа
    //В матрице отсутствуют нулевые строки, у каждого узла есть минимум 2 соседа: по y-по y, по х-по х или по y-по х
    //из-за разности b и d, а также m и n, для оценки снизу нужно брать минимум из (2.0*(1.0/h2+1.0/k2),2.0/h2,2.0/k2)
    //M_min=min(2.0*(1.0/h2+1.0/k2),2.0/h2,2.0/k2)
EXAMPLE_API Results MyMPI(int m_, int n_, int Nmax, double epsilon_method)
{
    Results res;
    const int n = n_, m = m_;
    const double h = (b - a) / n, k = (d - c) / m;
    const double h2 = h * h, k2 = k * k;
    std::vector<double> norm_history;

    // 1. Расчет параметров метода
    const double M_max = 4.0 * (1.0 / h2 + 1.0 / k2);
    const double M_min = std::min({ 2.0 * (1.0 / h2 + 1.0 / k2), 2.0 / h2, 2.0 / k2 });
    // Стало (для прямоугольной области):
    /*const double M_max = 8.0 * (1.0 / h2 + 1.0 / k2); 
    const double M_min = M_PI * M_PI * (1.0 / (b - a) + 1.0 / (d - c)); */
    const double Tau_opt = 2.0 / (M_min + M_max);
    const double Mu_A = M_max / M_min;

    // 2. Классификация узлов
    auto node_types = classify(n, m);
    std::vector<std::vector<double>> v(n + 1, std::vector<double>(m + 1, 0.0));

    // 3. Граничные условия
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (node_types[i][j] == 0) {
                v[i][j] = u(a + i * h, c + j * k);
            }
        }
    }

    // 4. Инициализация ошибки и итерационных параметров
    res.initial_residual = compute_residual_norm(v, node_types, n, m, h, k);
    double eps = 1000.0;
    int iter = 0;
    auto v_new = v;

    // 5. Итерационный процесс
    while (eps > epsilon_method && iter < Nmax)
    {
        // Обновление внутренних узлов
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                if (node_types[i][j] == 1 || node_types[i][j] == 2) {
                    const double F = f(a + i * h, c + j * k);
                    v_new[i][j] = v[i][j] + Tau_opt * (
                        F +
                        (v[i + 1][j] - 2 * v[i][j] + v[i - 1][j]) / h2 +
                        (v[i][j + 1] - 2 * v[i][j] + v[i][j - 1]) / k2
                        );
                }
            }
        }

        // Вычисление нормы
        double residual = compute_residual_norm(v_new, node_types, n, m, h, k);
        eps = compute_max_diff(v_new, v, node_types, n, m);  // Максимальная разность между итерациями
        norm_history.push_back(residual);  // Сохраняем невязку для истории
        v.swap(v_new);
        iter++;
    }

    // 6. Сохранение результатов
    res.m_min = M_min;
    res.m_max = M_max;
    res.tau_opt = Tau_opt;
    res.mu_A = Mu_A;
    res.iterations = iter;
    res.v = v;
    res.max_error = compute_max_error(res.v, n, m, res.max_i, res.max_j);
    res.final_residual = compute_residual_norm(v, node_types, n, m, h, k);


    std::vector<std::vector<double>> u_exact(n + 1, std::vector<double>(m + 1, 0.0));
    std::vector<std::vector<double>> error(n + 1, std::vector<double>(m + 1, 0.0));

    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= m; ++j)
        {
            if (is_inner_point(i, j, n, m) || border(i, j, n, m))
            {
                double x = a + i * h;
                double y = c + j * k;
                u_exact[i][j] = u(x, y);
                error[i][j] = u_exact[i][j] - res.v[i][j];
            }
            else
            {
                u_exact[i][j] = 0;
                error[i][j] = 0;
            }
        }
    }
    res.final_epsilon = eps;
    savetxt("u_exact.txt", u_exact);
    savetxt("error.txt", error);
    savetxt("solution.txt", v);

    return res;
}
