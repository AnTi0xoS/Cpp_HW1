#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	double r;
	double pi = 3.14;
	std::cout << "������� ������: ";
	std::cin >> r;
	std::cout << "����� ����������: " << 2 * pi * r << "\n";
	std::cout << "������� �����: " << pi * r * r << "\n";
	return 0;
}