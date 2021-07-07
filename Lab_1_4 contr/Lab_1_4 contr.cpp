#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int n, x1, x2, y1, y2, x, y;
    double sum = 0;

    std::cout << "Введите количество вершнин/n";
    std::cin >> n;
    std::cout << "Введите координаты вершины 1/n";
    std::cin >> x1 >> y1;
    x1 = x;
    x1 = x;
    y1 = y;
    for (int i = 0; i < (n - 1); i++) 
    {
        std::cin >> x2 >> y2;
        sum = sum + (x1 + x2) * (y2 - y1);
        x1 = x2;
        y1 = y2;

        if (i == n - 1) 
        {
            std::cout << "Воод окончен/n";
        }

    }
    sum = sum + (x + x2) * (y - y2);
    std::cout << "Площадь равна: ";
    std::cout << std::fixed << std::setprecision(3) << abs(sum) / 2 << std::endl;
    return 0;
}