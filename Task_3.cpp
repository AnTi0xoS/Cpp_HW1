#include <iostream>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b{}, c, s;
	std::cout << "Введите катеты: ";
	std::cin >> a;
	std::cin >> b;
	c = sqrt(a * a + b * b);
	s = a * b / 2;
	std::cout << "Гипотенуза равна: " << c << " Площать равна: " << s;
	return 0;
}