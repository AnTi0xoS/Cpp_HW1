#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    int num = 0;
    std::cout << "Введите число от 1 до 99: ";
    if (num > 20) num %= 10;
    switch (num)
    {
        case 1:  std::cout << "копейка"; break;
        case 2: case 3: case 4:  std::cout << "копейки"; break;
        case 5: case 6: case 7: case 8: case 9:
        case 10: case 11: case 12: case 13: case 14:
        case 15: case 16: case 17:case 18: case 19:
        case 20: std::cout << "копеек"; break;
    }
    return 0;
}