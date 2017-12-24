#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#define N_4 100
#define M_4 300

int main()
{
	char text[N_4][M_4] = { '\0' };
	char buf[M_4] = { '\0' };
	char *str[N_4] = { NULL };
	int i = 0, numLines = 0;

	FILE *fpIn = fopen("str_in.txt", "r");
	FILE *fpOut = fopen("str_out.txt", "w+");
	if (fpIn == NULL || fpOut == NULL)
		puts("File error!");

	numLines = countLines(buf, M_4, fpIn);
	for (i = 0; i < numLines; i++)
	{
		fgets(text[i], M_4, fpIn);
		str[i] = text[i];
	}

	lineSort(str, numLines);
	printLinesToFile((const char **)str, numLines, fpOut);

	fclose(fpIn);
	fclose(fpOut);
	return 0;
}