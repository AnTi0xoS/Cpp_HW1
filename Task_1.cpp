#include <iostream>

int main()
{
 setlocale (LC_ALL,"RUS");
	double b1, b2, h;
	std::cout << "������� ��������� � ������: ";
	std::cin >> b1;
	std::cin >> b2;
	std::cin >> h;
	std::cout << "������� �������� �����: " << ((b1 + b2) / 2) * h << std::endl;
 return 0;
}
