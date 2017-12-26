#include "task1.h"
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define SIZE 220
void compare(const void *a,const void *b)
{
	if (strlen(*(char **)a) < strlen(*(char **)b))
	{
		return 1;
	}
	else
		return -1;
}
void lineSort(char *str[], int size)
{
	qsort(str, size,sizeof(*str), compare);//base functi0n quick sort
}
void printLines(const char *str[], int size)
{
	int i = 0;
	while (i<size)
	{
		fputs(str[i++], stdout);
	}
	
}
