import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import sys

def save_plots():
    # Загрузка данных
    solution = np.loadtxt('solution.txt')
    error = np.loadtxt('error.txt')
    u_exact = np.loadtxt('u_exact.txt')

    # Параметры области
    a, b = 0.0, 2.0
    c, d = 0.0, 1.0

    # Создание сетки
    n_rows, n_cols = solution.shape
    x = np.linspace(a, b, n_rows)
    y = np.linspace(c, d, n_cols)
    X, Y = np.meshgrid(x, y, indexing='ij')

    # Список графиков и соответствующих имен файлов
    plots = [
        (solution, 'Численное решение', 'viridis', 'solution1'),
        (u_exact, 'Точное решение', 'plasma', 'u_exact1'),
        (error, 'Ошибка', 'coolwarm', 'error1'),
        (solution, 'Числ. вид сверху', 'viridis', 'solution2'),
        (u_exact, 'Точн. вид сверху', 'plasma', 'u_exact2'),
        (error, 'Ошибка вид сверху', 'coolwarm', 'error2')
    ]

    for i, (data, title, cmap, filename) in enumerate(plots):
        fig = plt.figure(figsize=(8, 6))
        ax = fig.add_subplot(111, projection='3d')
        
        if i >= 3:  # Для видов сверху (последние 3 графика)
            ax.view_init(elev=90, azim=-90)
            ax.set_zticks([])
            
        surf = ax.plot_surface(X, Y, data, cmap=cmap)
        fig.colorbar(surf)
        plt.title(title)
        plt.savefig(f'{filename}.png', dpi=100, bbox_inches='tight')
        plt.close()

if __name__ == "__main__":
    save_plots()