#include <iostream>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b{}, c, s;
	std::cout << "������� ������: ";
	std::cin >> a;
	std::cin >> b;
	c = sqrt(a * a + b * b);
	s = a * b / 2;
	std::cout << "���������� �����: " << c << " ������� �����: " << s;
	return 0;
}