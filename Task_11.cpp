#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    double sum;
    std::cout << "Введите сумму покупки: ";
    std::cin >> sum;
    if (sum > 1000)
    {
        sum *= 0.9;
        std::cout << "Скидка 10%. Итог: " << sum;
    }
    else std::cout << "Скидки нет. Итог: " << sum;
    return 0;
}