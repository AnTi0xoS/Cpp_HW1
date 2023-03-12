#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "RUS");
    double x, y;
    std::cout << "¬ведите координаты х и у: ";
    std::cin >> x;
    std::cin >> y;
    std::cout << "p = " << sqrt((pow(x, 2)) + (pow(y, 2))) << "w = " << atan2(x, y);
    return 0;
}