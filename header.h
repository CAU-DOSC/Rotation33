#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int gcd(int, int);

void juggling(char*, int, int);
void trivialSolution(char* ary, int length, int move);
void swap(char arr[], int i1, int i2, int bs);
void block_swap(char arr[], int bs, int arrs);
void reverse(char* arr, int a, int b);
void Reverse(char *arr, int n, int d);