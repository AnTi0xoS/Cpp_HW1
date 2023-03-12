#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    double hight, weight;
    std::cout << "Введите рост и вес: ";
    std::cin >> hight;
    std::cin >> weight;
    if (hight - 100 > weight) std::cout << "Вам стоит поправиться";
    else if (hight - 100 == weight) std::cout << "Ваш вес идеален";
    else std::cout << "Вам стоит похудеть";
    return 0;
}