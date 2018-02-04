#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task4.h"

#define N 30
#define M 80



int main()
{
	int i = 0;
	char text[N][M] = { 0 };
	char *pstr[N];
	int count = 0;
	FILE *wp;
	FILE *fp;
	fp = fopen("fp.txt", "r");
	wp = fopen("mp.txt", "wt");
	if (fp == NULL || wp == NULL)
	{
		printf("Error!\n");
			return 0;
	}
	else
	{
		while (feof(fp) == 0)
		{
			fgets(&text[count][0], M, fp);
			pstr[count] = &text[count++][0];
		}
		fclose(fp);
		lineSort(pstr, count);
		printLinesToFile(pstr, count, wp);
		fclose(wp);
	}
	

	return 0;
}