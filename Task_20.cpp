#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    double a, b, c, d;
    std::cout << "������� a, b, c, d ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    if (((a <= c) && (b <= d)) || ((a <= d) and (b <= c))) std::cout << "��, �����";
    else std::cout << "���, �� �����";
    return 0;
}