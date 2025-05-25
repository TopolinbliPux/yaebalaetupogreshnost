#ifndef FUNCTIONS_NAMES_H
#define FUNCTIONS_NAMES_H

#define _USE_MATH_DEFINES
#include <vector>
#include <string>
#include <cmath>
#include <fstream>
#include <limits>
#include <stdexcept>
#include <algorithm>
#include <iostream>
#include <iomanip>

#define EXAMPLE_API
using namespace std;

// Константы области
extern const double a;
extern const double b;
extern const double c;
extern const double d;
extern const double a_star;
extern const double b_star;
extern const double c_star;
extern const double d_star;
extern const double e_star;
extern const double f_star;

// Шаблонные функции
template<typename T>
std::vector<std::vector<T>> flipud(const std::vector<std::vector<T>>& input) {
    auto result = input;
    std::reverse(result.begin(), result.end());
    return result;
}

template<typename T>
std::vector<std::vector<T>> deep_copy(const std::vector<std::vector<T>>& source) {
    std::vector<std::vector<T>> dest;
    for (const auto& row : source)
        dest.push_back(row);
    return dest;
}

struct Results {
    double m_min;
    double m_max;
    double tau_opt;
    double mu_A;
    double initial_residual;
    double final_residual;
    double final_epsilon;
    int iterations;
    std::vector<std::vector<double>> v;
    double max_error;    // Максимальная погрешность
    int max_i;           // Индекс i максимума
    int max_j;           // Индекс j максимума
};

// Основной API
EXAMPLE_API void savetxt(const std::string& filename,
    const std::vector<std::vector<double>>& data);

EXAMPLE_API bool border(int i, int j, int n, int m);
EXAMPLE_API bool not_an_area(int i, int j, int n, int m);
EXAMPLE_API bool is_inner_point(int i, int j, int n, int m);

EXAMPLE_API double u(double x, double y);
EXAMPLE_API double f(double x, double y);

EXAMPLE_API std::vector<std::vector<int>> classify(int n, int m);

EXAMPLE_API double calc_eps(const std::vector<std::vector<double>>& res,
    const std::vector<std::vector<double>>& v,
    int m, int n,
    double h, double k,
    double eps1,
    double& max_x,
    double& max_y);
EXAMPLE_API Results MyMPI(int m_, int n_, int Nmax, double epsilon_method);

EXAMPLE_API double compute_max_error(const vector<vector<double>>& v,
    int n, int m,
    int& max_i, int& max_j);
//EXAMPLE_API double compute_euclidean_norm(const vector<vector<double>>& v,
//    const vector<vector<int>>& node_types,
//    int n, int m, double h, double k, bool use_max);
//EXAMPLE_API double calc_eps_s(std::vector<double>& history_norms,
//    const std::vector<std::vector<double>>& v_new,
//    const std::vector<std::vector<double>>& v,
//    const std::vector<std::vector<int>>& node_types,
//    int n, int m, double h, double k);
EXAMPLE_API double compute_residual_norm(
    const vector<vector<double>>& v,
    const vector<vector<int>>& node_types,
    int n, int m,
    double h, double k
);
EXAMPLE_API double compute_max_diff(
    const vector<vector<double>>& v_new,
    const vector<vector<double>>& v,
    const vector<vector<int>>& node_types,
    int n, int m
);
#endif