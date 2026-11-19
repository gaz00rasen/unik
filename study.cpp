#include <iostream>

void matrix(int(&mat)[4][3])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++) { std::cout << mat[i][j] << "\t"; }
	}
}

int main()
{
	std::setlocale(LC_ALL, "Russian");
	int mat[4][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12} };
	char choice;
	printf("Использовать готовую матрицу? Y/N");
	std::cin >> choice;
	if (choice == "Y" || choice == "y")
	{
		matrix(mat);
	}
}

// Янин Трофим, 1-4, вариант 2