#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    int num = 0;
    std::cout << "Введите трехзначное число: ";
    std::cin >> num;
    int b = 0;
    std::cout << "Введите число b: ";
    std::cin >> b;
    if ((num % 10) * (num / 10 % 10) * (num / 100 % 10) > b) std::cout << "Произведение цифр числа больше числа b";
    else std::cout << "Произведение цифр числа меньше числа b";
    if (((num % 10) + (num / 10 % 10) + (num / 100 % 10)) % 7 == 0) std::cout << "Сумма цифр числа кратна 7";
    else std::cout << "Сумма цифр числа не кратна 7";
    return 0;
}