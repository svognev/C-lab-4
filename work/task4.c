#include "task4.h"

void printLinesToFile(const char *str[], int size, FILE *fp)
{
	while (size--)
		fputs(str[size], fp);
	fclose(fp);
}