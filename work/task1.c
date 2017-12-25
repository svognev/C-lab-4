#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int compareStr(const void *a, const void *b)
{
	if (strlen(*(char**)a) > strlen(*(char**)b))
		return 1;
	else
		return -1;
}

void lineSort(char *str[], int size)
{
	qsort(str, size, sizeof(char*), compareStr);
}

void printLines(const char *str[], int size)
{
	for (int i = 0; i < size; i++)
		puts(str[i]);
}