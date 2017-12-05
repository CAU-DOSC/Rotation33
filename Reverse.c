#include "header.h"

void reverse(char* arr, int a, int b)
{

	char temp;

	for (int i = a; i < ((b - a + 1) / 2) + a; i++)
	{
		temp = arr[i];
		arr[i] = arr[b - i + a];
		arr[b - i + a] = temp;
	}
}

void Reverse(char *arr, int n, int d)
{
	reverse(arr, 0, d - 1);
	reverse(arr, d, n - 1);
	reverse(arr, 0, n - 1);
}
