#pragma once

void create_vector(int*& v, int m);
void free_vector(int*& v);
void print_vector(const int* v, int m);
void fill_zeros(int* v, int m);
void fill_random(int* v, int m);
void fill_exact(int* v, int m, ...);