#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    double hight, weight;
    std::cout << "������� ���� � ���: ";
    std::cin >> hight;
    std::cin >> weight;
    if (hight - 100 > weight) std::cout << "��� ����� �����������";
    else if (hight - 100 == weight) std::cout << "��� ��� �������";
    else std::cout << "��� ����� ��������";
    return 0;
}