#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task1.h"
#define N 100

int main()
{
	char input[N][N];
	char *str[N] = { input };
	int i = 0;
	while (input[i-1][0] != '\n')
	{
		fgets(input[i], N, stdin);
		str[i] = &input[i];
		i++;
	}
	input[i-1][0] = '\0';
	str[i-1] = &input[i-1];
	lineSort(str, i);
	printLines(str, i);

	return 0;
}