#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	double r;
	double pi = 3.14;
	std::cout << "Введите радиус: ";
	std::cin >> r;
	std::cout << "Длина окружности: " << 2 * pi * r << "\n";
	std::cout << "Площадь равна: " << pi * r * r << "\n";
	return 0;
}