#include <iostream>

int main()
{
	//(#1#)
	setlocale(LC_ALL, "Russian");
	short fst, scn;
	printf("Введите значения для A и B: \n");
	std::cin >> fst >> scn;
	if (fst > scn)
	{
		printf("Число A больше чем B, введите целое значение для С: \n");
		short thr;
		std::cin >> thr;

		if (thr > fst && thr > scn)
		{
			printf("Синий");
		}
		else
		{
			printf("Зеленый");
		}
	}
	else
	{
		printf("Ракета");
	}

	//(#2#)

}
// Янин Трофим, 1-4, вариант 2