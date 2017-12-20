#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.h"
#include "task4.h"
#include <time.h>


int compare(const void *a, const void *b)
{
	if (strlen(*(char**)a) > strlen(*(char**)b))
		return 1;
	else
		return -1;
}

void lineSort(char *str[], int size)
{
	qsort(str, size, sizeof(char*), compare);
}

void printLines(const char *str[], int size) {
	for (int i = 0; i < size; i++)
		printf("%s", str[i]);
}
