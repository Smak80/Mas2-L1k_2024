#include <iostream>
#include <ctime>
#include "Matrix.h"

using namespace std;

void create_matrix(int**& matr, int m, int n) {
	//создание матрицы
	matr = new int* [m];
	for (int i = 0; i < m; i++) {
		matr[i] = new int[n];
	}
}

void free_matrix(int**& matr, int m) {
	for (int i = 0; i < m; i++) {
		delete[] matr[i];
	}
	delete[] matr;
	matr = nullptr;
}

void print_matrix(const int** matr, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << matr[i][j] << " ";
		}
		cout << endl;
	}
}

void fill_zeros(int** matr, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			matr[i][j] = 0;
		}
	}
}

void fill_random(int** matr, int m, int n) {
	srand(time(nullptr) + rand());
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			//matr[i][j] = rand() % 201 - 100;
			matr[i][j] = ((double)rand() / RAND_MAX) * 200 - 100;
		}
	}
}