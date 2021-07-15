// Lab_4_3_1 contr.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int Myroot(double, double, double, double&, double&);

int main()
{
    std::cout << "Hello World!\n";
}

int Myroot(double a, double b, double c, double& x1, double& x2) 
{

    if ((b * b - 4 * a * c) >= 0) //Если дискриминант больше или равен 0
    {
        x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        std::cout << "Первый корень равен " << x1 << std::endl;
        x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        std::cout << "Второй корень равен " << x2 << std::endl;

        if ((b * b - 4 * a * c) == 0)
        {
            return 0;
        }
        return 1;
    }
    else 
    {
        return -1;
    }
}