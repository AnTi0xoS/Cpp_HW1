#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    double price;
    int day, min = 0;
    std::cout << "������� ��������� ����� ������: ";
    std::cin >> price;
    std::cout << "������� ���� ������ (�� 1 �� 6) � ����������������� ��������� � �������: ";
    std::cin >> day;
    std::cin >> min;
    if (day == 6 || day == 7) std::cout << "������ 20%. ����: " << 0.8 * price * min;
    else std::cout << "������ ���. ����: " << price * min;
    return 0;
}