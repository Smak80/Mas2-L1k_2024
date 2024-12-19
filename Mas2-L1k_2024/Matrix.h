#pragma once

void create_matrix(int**& matr, int m, int n);
void free_matrix(int**& matr, int m);
void print_matrix(const int** matr, int m, int n);
void fill_zeros(int** matr, int m, int n);
void fill_random(int** matr, int m, int n);