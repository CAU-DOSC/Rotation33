#include "header.h"

void trivialSolution(char* ary, int length, int move) {

	int i;
	char *str = NULL;
	str = (char *)malloc(sizeof(char)*(move + 1));

	for (i = 0;i<move;i++) {
		str[i] = ary[i];
	}
	for (i = 0;i < length - move;i++) {
		ary[i] = ary[i + move];
	}
	for (i = 0;i<move;i++) {
		ary[length - move + i] = str[i];
	}
	free(str);
	printf("\n%s\n", ary);
}