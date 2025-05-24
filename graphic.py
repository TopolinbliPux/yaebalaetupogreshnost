import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# Загрузка данных из файлов
solution = np.loadtxt('solution.txt')
error = np.loadtxt('error.txt')
u_exact = np.loadtxt('u_exact.txt')

# Параметры области (из C++ кода)
a, b = 0.0, 2.0
c, d = 0.0, 1.0

# Создание сетки координат
n_rows, n_cols = solution.shape
x = np.linspace(a, b, n_rows)
y = np.linspace(c, d, n_cols)
X, Y = np.meshgrid(x, y, indexing='ij')

# Создание фигуры с двумя рядами субплотов
fig = plt.figure(figsize=(18, 12))

# Первый ряд - 3D поверхности
# Численное решение
ax1 = fig.add_subplot(231, projection='3d')
surf1 = ax1.plot_surface(X, Y, solution, cmap='summer')
fig.colorbar(surf1, ax=ax1, shrink=0.5)
ax1.set_title('Численное решение')
ax1.set_xlabel('X')
ax1.set_ylabel('Y')
ax1.set_zlabel('Z')

# Точное решение
ax2 = fig.add_subplot(232, projection='3d')
surf2 = ax2.plot_surface(X, Y, u_exact, cmap='summer')
fig.colorbar(surf2, ax=ax2, shrink=0.5)
ax2.set_title('Точное решение')
ax2.set_xlabel('X')
ax2.set_ylabel('Y')
ax2.set_zlabel('Z')

# Ошибка
ax3 = fig.add_subplot(233, projection='3d')
surf3 = ax3.plot_surface(X, Y, error, cmap='summer')
fig.colorbar(surf3, ax=ax3, shrink=0.5)
ax3.set_title('Ошибка')
ax3.set_xlabel('X')
ax3.set_ylabel('Y')
ax3.set_zlabel('Ошибка')

# Второй ряд - виды сверху
# Численное решение (вид сверху)
ax4 = fig.add_subplot(234, projection='3d')
surf4 = ax4.plot_surface(X, Y, solution, cmap='summer')
ax4.view_init(elev=90, azim=-90)  # Вид строго сверху
ax4.set_title('Численное решение')
ax4.set_xlabel('X')
ax4.set_ylabel('Y')
ax4.set_zticks([])  # Скрываем метки оси Z

# Точное решение (вид сверху)
ax5 = fig.add_subplot(235, projection='3d')
surf5 = ax5.plot_surface(X, Y, u_exact, cmap='summer')
ax5.view_init(elev=90, azim=-90)
ax5.set_title('Точное решение')
ax5.set_xlabel('X')
ax5.set_ylabel('Y')
ax5.set_zticks([])

# Ошибка (вид сверху)
ax6 = fig.add_subplot(236, projection='3d')
surf6 = ax6.plot_surface(X, Y, error, cmap='summer')
ax6.view_init(elev=90, azim=-90)
ax6.set_title('Ошибка')
ax6.set_xlabel('X')
ax6.set_ylabel('Y')
ax6.set_zticks([])

plt.tight_layout()
plt.show()