#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    double a, b, c;
    std::cout << "Введите стороны треугольника: ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    if (a == b || a == c || b == c) std::cout << "Треугольник равнобедренный";
    else std::cout << "Треугольник не равнобедренный";
    return 0;
}