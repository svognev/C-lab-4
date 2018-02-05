#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define OUT 0
#define IN 1
#define END 2
//#define SIZE 220


int compare(const void *a,const void *b)
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
	qsort(str, size,sizeof(char **), compare);//base functi0n quick sort
}
void printLines(const char *str[], int size)
{
	for (int i = 0;i < size;i++)
		if (str[i][strlen(str[i]) - 1] == '\n')
			fputs(str[i], stdout);
		else
			puts(str[i]);
}
