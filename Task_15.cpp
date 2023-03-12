#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    int month;
    std::cout << "Введите номер месяца от 1 до 12: ";
    std::cin >> month;
    switch (month)
    {
        case 1: std::cout << "Зима, Январь" break;
        case 2: std::cout << "Зима, Февраль"; break;
        case 3: std::cout << "Весна, Март"; break;
        case 4: std::cout << "Весна, Апрель"; break;
        case 5: std::cout << "Весна, Май"; break;
        case 6: std::cout << "Лето, Июнь"; break;
        case 7: std::cout << "Лето, Июль"; break;
        case 8: std::cout << "Лето, Август"; break;
        case 9: std::cout << "Осень, Сентябрь"; break;
        case 10: std::cout << "Осень, Октябрь"; break;
        case 11: std::cout << "Осень, Ноябрь"; break;
        case 12: std::cout << "Зима, Декабрь"; break;
        default: break;
    }
    return 0;
}