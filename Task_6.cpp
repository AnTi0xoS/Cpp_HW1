#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "RUS");
    double p, w;
    std::cout << "������� ���������� p � w: ";
    std::cin >> p;
    std::cin >> w;
    std::cout << "x = " << p * (cos(w)) << "y = " << p * (sin(w));
    return 0;
}