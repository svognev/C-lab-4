#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task4.h"

#define N 256
#define M 256

int main()
{
	char text[N][M] = { 0 };
	char *str[N] = { 0 };
	int count = 0;
	FILE *fp, *fw;

	fp = fopen("lab4task4input.txt", "rt");
	if (fp == NULL)
	{
		puts("Cant open the file!\n");
		return 1;
	}

	fw = fopen("lab4task4output.txt", "wt");
	if (fw == NULL)
	{
		puts("Cant open the file!\n");
		return 1;
	}

	if (fp == NULL || fw == NULL)
	{
		puts("404! Files not found!");
		return 1;
	}

	while (fgets(text[count], M, fp) != NULL)
		str[count] = text[count++];
	fclose(fp);

	lineSort(str, count);
	printLinesToFile(str, count, fw);
	fclose(fw);
	
	return 0;
}