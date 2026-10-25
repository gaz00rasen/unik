#include <iostream>
#include <cmath> //cmath, тк используем sqrt()

double kor(int& x) { return sqrt(x); } // ф-я для извлечения корня переменной с типом int()
double kor(long& x) { return sqrt(x); } // ф-я для извлечения корня переменной с типом long()
double kor(float& x) { return sqrt(x); } // ф-я для извлечения корня переменной с типом float()
double kor(double& x) { return sqrt(x); } // ф-я для извлечения корня переменной с типом double()

void mysum(double& a, double& b, double& c, double& d) // ф-я для вычисления конечной суммы корней переменных
{
	double nsum = a + b + c + d; // суммируем переменные
	printf("Результат извлечения корня:\nkor(int): %.2f\nkor(long): %.2f\nkor(float): %.2f\nkor(double): %.2f\nСумма результатов: %.2f\n\n", a, b, c, d, nsum); //выводим ответ
}

int recurs(int A) // ф-я рекурсии, для подсчета суммы вида 1+2+...+А
{
	if (A <= 0) { return 0; } // если значение А меньше или равно нуля, останавливаем рекурсию
	int otv = A + recurs(A - 1); // считаем сумму элементов последовательности
	printf("F(%d) = %d\n", A, otv);
	return otv;
}

int main() // главная функция
{
	std::setlocale(LC_ALL, "Russian"); // заставляем консоль выводить русский текст

	int fst; long scn; float thr; double fth; // задаем 4 переменные с разными базовыми типами данных
	printf("Введите число (int):\n");
	std::cin >> fst;
	printf("Введите число (long):\n");
	std::cin >> scn;
	printf("Введите число (float):\n");
	std::cin >> thr;
	printf("Введите число (double):\n");
	std::cin >> fth;

	double r1 = kor(fst); double r2 = kor(scn); double r3 = kor(thr); double r4 = kor(fth); // вызываем функции kor() для каждого типа данных

	mysum(r1, r2, r3, r4); // складываем получившиеся значения корней

	/*============================================================*/

	int A;
	printf("Введите число А:\n");
	std::cin >> A; // запрашиваем число, конечный шаг последовательности
	int otv = recurs(A); // вызываем рекурсивную функцию, записываем её ответ в отдельную переменную
	printf("Итоговая сумма 1 + 2 + ... + %d равна: %d", A, otv); // выводим результат
}
// Янин Трофим, 1-4, вариант 2