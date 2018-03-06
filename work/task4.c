#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task4.h"

void printLinesToFile(const char *str[], int size, FILE *fp)
{
	int i;
	for (i = 0; i < size; i++)
	{
		fprintf(fp, "%s", str[i]);
		if (str[i][strlen(str[i]) - 1] != '\n')
			fprintf(fp, "\n");
	}
}
