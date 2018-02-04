#include<stdio.h>
#include "task4.h"

void printLinesToFile(const char *str[], int size, FILE *fp)
{
	int i = 0, j = 0;
	while (i<size)
	{
		j = fputs(str[i], fp);
		i++;
	}

	printf("%s\n", "The file has been successfuly changed and saved");

}