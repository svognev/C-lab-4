#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printLinesToFile(const char *str[], int size, FILE *fp)
{
	while (size--)
		fputs(str[size], fp);
	fclose(fp);
}