#include <iostream>
#include "Matrix.h"
#include "Vector.h"
#define PI 3.1415926535897932

using namespace std;

void main() {
	setlocale(LC_ALL, "");

	int m = 5;// m - кол-во строк
	int n = 4; // n - кол-во столбцов

	cout << PI << endl;

	int** matr1 = nullptr;

	create_matrix(matr1, m, n);

	// работа с матрицей
	fill_zeros(matr1, m, n);
	print_matrix((const int **)matr1, m, n);
	cout << endl;

	fill_random(matr1, m, n);
	print_matrix((const int**)matr1, m, n);
	cout << endl;

	fill_random(matr1, m, n);
	print_matrix((const int**)matr1, m, n);
	cout << endl;

	//удаление матрицы
	free_matrix(matr1, m);

	int* v1 = nullptr;
	create_vector(v1, m);
	fill_exact(v1, m, 1, -7, 9, 3, 888);
	print_vector(v1, m);
	free_vector(v1);

	int* v2 = nullptr;
	create_vector(v2, n);
	fill_exact(v2, n, 0, 71, 93, 31, 45);
	print_vector(v2, n);
	free_vector(v2);

}