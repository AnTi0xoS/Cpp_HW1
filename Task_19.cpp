#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    int num = 0;
    std::cout << "������� ����������� �����: ";
    std::cin >> num;
    int b = 0;
    std::cout << "������� ����� b: ";
    std::cin >> b;
    if ((num % 10) * (num / 10 % 10) * (num / 100 % 10) > b) std::cout << "������������ ���� ����� ������ ����� b";
    else std::cout << "������������ ���� ����� ������ ����� b";
    if (((num % 10) + (num / 10 % 10) + (num / 100 % 10)) % 7 == 0) std::cout << "����� ���� ����� ������ 7";
    else std::cout << "����� ���� ����� �� ������ 7";
    return 0;
}