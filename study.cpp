#include <iostream>
#include <bitset>

int scnd()
{
	std::bitset<8> d(short(25)), f(short(19));
	short i;
	std::cout << "2)\nD = 25, битовая цепочка D: " << d << "\nF = 19, битовая цепочка F: " << f << "\nРезультат выражения (F | (F<<2)) & D: " << ((f | (f << 2)) & d);
	printf("\n\nКакое значение i бита (D>>3) показать? Значение должно находится в диапазоне от 0 до 7.\n");
	std::cin >> i;
	std::cout << "Битовая цепочка D>>3: " << (d >> 3) << "\nЗначение бита i: " << (d >> 3)[i] << std::endl;

	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b;
	std::cout << "1)\nВведите значение для чисел A и B: \n";
	std::cin >> a >> b;
	float c = pow(a, 2) + 2 * pow(b, 0.5);
	printf("Значение A: %.2f\nЗначение B: %.2f\nЗначение С по формуле (C = A^2 + 2 * sqrt(B)) равно: %.2f\n\n", a, b, c);
	scnd();
}