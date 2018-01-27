#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task4.h"
#define N 128
#define M 128

int main()
{
	char text[N][M] = { 0 };
	char *str[N] = { 0 };
	int count = 0;
	FILE *fpr, *fpw;
	fpr = fopen("task4in.txt", "rt");
	fpw = fopen("task4out.txt", "wt");
	if (fpr == NULL || fpw == NULL)
	{
		puts("Files not found! You must create files.");
		return 1;
	}
	while (fgets(text[count], M, fpr) != NULL)
		str[count] = text[count++];
	fclose(fpr);

	lineSort(str, count);
	printLinesToFile(str, count, fpw);
	fclose(fpw);

	return 0;
}