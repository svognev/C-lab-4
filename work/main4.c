#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"task4.h"
#include"task1.h"

#define N 50
#define M 80

int main()
{
	FILE *inp, *outp;
	char text[N][M] = {0};
	char *pstr[N] = {0};
	int count = 0;

	inp = fopen("txtIN.txt", "rt");

	if (inp == NULL)
	{
		puts("I can't open!");
		return 1;
	}

	while (fgets(text[count], M, inp) != NULL)
		pstr[count] = text[count++];
			
	fclose(inp);

	lineSort(pstr, count);
	
	outp = fopen("txtOUT.txt", "wt");
	
	printLinesToFile(pstr, count, outp);

	return 0;
}
