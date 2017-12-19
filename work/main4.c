#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "task4.h"
#include <string.h>

#define N 20
#define M 100

int main()
{
	int count = 0;
	FILE *fp;
	char buf[N][M] = { 0 };
	char* pstr[N] = { 0 };
	fp = fopen("input.txt", "rt");
	if (fp == NULL)
	{
		puts("I cant open file");
		return 1;
	}
	while (fgets(buf[count], M, fp) != NULL)
		pstr[count] = buf[count++];
	fclose(fp);
	buf[count-1][strlen(buf[count - 1])]='\n';
	lineSort(pstr, count);
	fp = fopen("outputSort.txt", "wt");
	if (fp == NULL)
	{
		puts("I cant open file");
		return 1;
	}
	printLinesToFile(pstr, count, fp);
	
	
	return 0;
}