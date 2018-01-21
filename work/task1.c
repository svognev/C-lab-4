#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int compare(const void *a, const void *b) 
{
	if (strlen(*(char**)a) > strlen(*(char**)b))
		return 1;
	else
		return -1;
}

void lineSort(char *str[], int count) //size >> count
{
	qsort(str, count, sizeof(char*), compare);
}

void printLines(const char *str[], int count) //size >> count
{
	for (int i = 0; i < count; i++)
		printf("%s", str[i]);
}