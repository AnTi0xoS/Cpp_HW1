#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    double sum;
    std::cout << "������� ����� �������: ";
    std::cin >> sum;
    if (sum > 1000)
    {
        sum *= 0.9;
        std::cout << "������ 10%. ����: " << sum;
    }
    else std::cout << "������ ���. ����: " << sum;
    return 0;
}