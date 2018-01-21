#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task4.h"

void printLinesToFile(const char *str[], int size, FILE *fp)
{
	int i = 0;
	for (; i < size; i++)
	{
		fprintf(fp, "%s", str[i]);
	}
}