#include "header.h"

int main()
{
	char * arr;
	char * temp;
	int n, d;

	// Input
	printf("Input N to create random string  : ");
	scanf("%d", &n);

	arr = (char*)malloc(sizeof(char)*n+1);
	temp = (char*)malloc(sizeof(char)*n+1);

	srand(time(NULL));

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 26 + 65;
	}

	arr[n] = '\0';
	temp[n] = '\0';

	printf("\ncreated: %s\n", arr);

	printf("Input d to shift: ");
	scanf("%d", &d);

	// Juggling Rotation
	strcpy(temp, arr);
	clock_t begin = clock();
	juggling(arr, n, d);
	clock_t end = clock();
	printf("Time spent for juggling : %f s\n", (double)(end - begin)/CLOCKS_PER_SEC);

	// Trivial Rotation
	strcpy(temp, arr);
	begin = clock();
	trivialSolution(arr, n, d);
	end = clock();
	printf("Time spent for trivial : %f s\n", (double)(end - begin)/CLOCKS_PER_SEC);
	
	// Block_Swap Rotation
	strcpy(temp, arr);
	begin = clock();
	Block_Swap(arr, n, d);
	end = clock();
	printf("Time spent for Block-Swap : %f s\n", (double)(end - begin)/CLOCKS_PER_SEC);
	

	// Reverse Rotation
	strcpy(temp, arr);
	begin = clock();
	Reverse(arr, n, d);
	end = clock();
	printf("Time spent for Reverse : %f s\n", (double)(end - begin)/CLOCKS_PER_SEC);
	
	free(arr);
	free(temp);
	return 0;
}
