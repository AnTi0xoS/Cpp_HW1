#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    int num = 0;
    int mun = 0;
    std::cout << "������� �����: ";
    std::cin >> num;
    int x = num;
    while (x)
    {
        mun = mun * 10 + x % 10;
        x /= 10;
    }
    if (num == mun) std::cout << "��� ����� - ���������";
    else std::cout << "��� ����� - �� ���������";
    return 0;
}