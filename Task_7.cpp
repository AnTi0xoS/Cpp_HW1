#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    double a, b, c, d, x1, x2;
    std::cout << "a*x^2 + b*x + c = 0 ¬ведите a,b,c: ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    if (a == 0.0) {
        x1 = -c / b;
        std::cout << "x= " << x1 << "\n";
        return 0;
    }
    d = b * b - 4 * a * c;
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        std::cout << "x1=" << x1 << " x2=" << x2 << "\n";
    }
    else if (d == 0.0) {
        x1 = (-b / (2 * a)); x2 = x1;
        std::cout << "x=" << x1 << "\n";
    }
    else {
        std::cout << "ƒействительных корней нет";
    }
    return 0;
}
