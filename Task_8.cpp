#include <iostream>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    double a, b, c, ma, mb, mc;
    std::cout << "������� ����� a, b, c";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    ma = sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2)) / 2;
    mb = sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2)) / 2;
    mc = sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2)) / 2;
    std::cout << "�������, ����������� � ������� a = " << ma << " � ������� b = " << mb << " � ������� c = " << mc;
    return 0;
}