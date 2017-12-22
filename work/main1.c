#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task1.h"
#define N_1 25
#define M_1 80

int main()
{
	char text[N_1][M_1] = { '\0' };
	char *str[N_1] = { NULL };
	int count = 0;

	printf("Enter your lines:\n");

	while ((count < N_1) && (*fgets(text[count], M_1, stdin) != '\n'))
		str[count] = text[count++];

	lineSort(str, count);
	printLines((const char **)str, count);
	return 0;
}