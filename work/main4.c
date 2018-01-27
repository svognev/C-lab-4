#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task4.h"
#define N 100

int main()
{
	printf("Enter file name:\n");
	//char fileName[N] = { 0 };
	char input[N][N] = { 0 };
	//scanf("%s", fileName);
	FILE *fp, *inp;
	inp = fopen("bura.txt", "rt");
	fp = fopen("output.txt", "wt");
	if (inp == NULL)
	{
		puts("File not found!");
		return 1;
	}
	
	char *str[N] = { input };
	int i = 0;

	while (fgets(input[i], N, inp))
	{
		str[i] = input + i;
		if (input[i][strlen(input[i]) - 1] == '\n')
			input[i][strlen(input[i]) - 1] = '\0';
		i++;
	}

	lineSort(str, i);
	printLinesToFile(str, i, fp);

	return 0;
}