#include <iostream>


int main()
{
    setlocale(LC_ALL, "RUS");
    int st = rand() * 9 / RAND_MAX + 1;
    int nd = rand() * 9 / RAND_MAX + 1;
    int x = 0;
    std::cout << st << " * " << nd << " = ";
    std::cin >> x;
    if (x == st * nd) std::cout << "Верно!";
    else std::cout << "Неверно!";
    return 0;
}