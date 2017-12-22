#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#define N 100
#define M 300

int main()
{
	char text[N][M] = { '\0' };
	char buf[M] = { '\0' };
	char *str[N] = { NULL };
	int i = 0, numLines = 0;

	FILE *fpIn = fopen("str_in.txt", "r");
	FILE *fpOut = fopen("str_out.txt", "w+");
	if (fpIn == NULL || fpOut == NULL)
		puts("File error!");

	numLines = countLines(buf, M, fpIn);
	for (i = 0; i < numLines; i++)
	{
		fgets(text[i], M, fpIn);
		str[i] = text[i];
	}

	lineSort(str, numLines);
	printLinesToFile((const char **)str, numLines, fpOut);

	fclose(fpIn);
	fclose(fpOut);
	return 0;
}