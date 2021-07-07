#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int x, y;
    std::cout << "Введите координаты ";
    std::cin >> x >> y;

    if (x * x + y * y < 9 && y > 0)
    {
        std::cout << "Внутри";
    }
    else if (x * x + y * y > 9 || y < 0)
    {
        std::cout << "Снаружи";
    }
    else
    {
        std::cout << "На границе";
    }
}