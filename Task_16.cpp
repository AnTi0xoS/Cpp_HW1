#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    int num = 0;
    std::cout << "������� �����: ";
    std::cin >> num;
    if (((num / 100000) + ((num / 10000) % 10) + ((num / 1000) % 10)) == (((num / 100) % 10) + ((num / 10) % 10) + (num % 10))) std::cout << "����� ����������";
    else std::cout << "����� �� ����������";
    return 0;
}