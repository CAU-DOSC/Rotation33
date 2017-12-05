#include"header.h"

int gcd(int a, int b)
{
	int c;
	while (a != 0) {
		c = a;
		a = b % a;
		b = c;
	}
	return b;
}

void juggling(char* arr, int n, int d) {
	char temp;
	int i, j, k;
	for (int i = 0; i < gcd(n, d); i++) {
		temp = arr[i];
		j = i;
		while (1) {
			k = d + j;
			if (k >= n)
				k -= n;
			if (k == i)
				break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}
}