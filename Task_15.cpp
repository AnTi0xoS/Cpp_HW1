#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    int month;
    std::cout << "������� ����� ������ �� 1 �� 12: ";
    std::cin >> month;
    switch (month)
    {
        case 1: std::cout << "����, ������" break;
        case 2: std::cout << "����, �������"; break;
        case 3: std::cout << "�����, ����"; break;
        case 4: std::cout << "�����, ������"; break;
        case 5: std::cout << "�����, ���"; break;
        case 6: std::cout << "����, ����"; break;
        case 7: std::cout << "����, ����"; break;
        case 8: std::cout << "����, ������"; break;
        case 9: std::cout << "�����, ��������"; break;
        case 10: std::cout << "�����, �������"; break;
        case 11: std::cout << "�����, ������"; break;
        case 12: std::cout << "����, �������"; break;
        default: break;
    }
    return 0;
}