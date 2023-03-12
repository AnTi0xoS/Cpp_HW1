#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    int hour, min, sec;
    std::cout << "Введите количество секунд: ";
    std::cin >> sec;
    hour = sec / 3600;
    min = (sec - hour * 3600) / 60;
    std::cout << "Прошло " << hour << " часов " << min << " минут";
    return 0;
}