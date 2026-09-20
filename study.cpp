#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	float a;
	int b;
	std::string c;

	std::cin >> a >> b >> c;

	std::cout << "Бегемот Арси весит " << a << " кг., съедает " << b << " арбузов в день и по документам " << c << std::endl;
}
//Янин Трофим, 1-4, вариант 3