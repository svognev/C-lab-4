#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "task1.c"

/*int sort(const void *a, const void *b)
{
	if (strlen(*(char**)a) > strlen(*(char**)b))
		return -1;
	else
		return 1;
}

void lineSort(char *str[], int size)
{
	qsort(str, size, sizeof(char*), sort);
}*/

void printLinesToFile(const char *str[], int size, FILE *fp)
{
	
	while (size--)
		fputs(str[size], fp);
	fclose(fp);
}