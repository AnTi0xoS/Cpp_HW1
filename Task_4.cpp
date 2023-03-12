#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
	int num, sum = 0;
	std::cout << "¬ведите число: ";
	std::cin >> num;
    while (num >= 10)
    {
        sum += num % 10;
        num /= 10;
    }
    sum += num;
    std::cout << sum;
	return 0;
}