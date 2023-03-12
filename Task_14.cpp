#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    double price;
    int day, min = 0;
    std::cout << "¬ведите стоимость одной минуты: ";
    std::cin >> price;
    std::cout << "¬ведите день недели (от 1 до 6) и продолжительность разговора в минутах: ";
    std::cin >> day;
    std::cin >> min;
    if (day == 6 || day == 7) std::cout << "—кидка 20%. »тог: " << 0.8 * price * min;
    else std::cout << "—кидки нет. »тог: " << price * min;
    return 0;
}