#include "Vector.h"
#include <iostream>
#include <ctime>
#include <stdarg.h>

using namespace std;

void create_vector(int*& v, int m) {
	v = new int[m];
}

void free_vector(int*& v) {
	delete[] v;
	v = nullptr;
}

void print_vector(const int* v, int m) {
	for (int i = 0; i < m; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

void fill_zeros(int* v, int m) {
	for (int i = 0; i < m; i++) {
		v[i] = 0;
	}
}

void fill_random(int* v, int m) {
	srand(time(nullptr) + rand());
	for (int i = 0; i < m; i++) {
		v[i] = ((double)rand() / RAND_MAX) * 200 - 100;
	}
}

void fill_exact(int* v, int m, ...) {
	va_list p_elem;
	va_start(p_elem, m);
	for (int i = 0; i < m; i++) {
		v[i] = va_arg(p_elem, int);
	}
	va_end(p_elem);
}