#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    int hour, min, sec;
    std::cout << "������� ���������� ������: ";
    std::cin >> sec;
    hour = sec / 3600;
    min = (sec - hour * 3600) / 60;
    std::cout << "������ " << hour << " ����� " << min << " �����";
    return 0;
}