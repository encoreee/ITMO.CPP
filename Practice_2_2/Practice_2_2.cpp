#include <iostream>

int main()
{
    char op;

    std::cout << "Сделай свой выбор, собери авто свой мечты: ";
    std::cin >> op;
    switch (op)
    {
    case 'S':
        std::cout << "Радио играть должно\n";
        std::cout << "Колеса круглые\n";
        std::cout << "Мощный двигатель\n";
        break;
    case 'V':
        std::cout << "Кондиционер хочу\n";
        std::cout << "Радио играть должно\n";
        std::cout << "Колеса круглые\n";
        std::cout << "Мощный двигатель\n";
        break;
    default:
        std::cout << "Колеса круглые\n";
        std::cout << "Мощный двигатель\n";
    }
    /*
     switch (op)
    {
    case 'V':
        cout << "Кондиционер хочу\n";
    case 'S':
        cout << "Радио играть должно\n";
    default:
        cout << "Колеса круглые\n";
        cout << "Мощный двигатель\n";
    }
    */
   
}