#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    double a, b, c;
    std::cout << "������� ������� ������������: ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    if (a == b || a == c || b == c) std::cout << "����������� ��������������";
    else std::cout << "����������� �� ��������������";
    return 0;
}