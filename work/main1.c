#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define OUT 0
//#define IN 1
//#define END 2
#define SIZE 220

#include "task1.h"
int main()
{
	int i = 0,j=0,countN=0;
	//int flagEnt = OUT;// flag end of entered lines
	char *p[SIZE];
	char str[SIZE][SIZE] = { ' ' };
	
	printf("Enter few lines of string:\n");
	
	while (countN<=0 && *(p[i]=fgets(str[i],SIZE,stdin))!=EOF)
	{
		if (*str[i] == '\n')
			countN++;
		else
			countN = 0;

		str[i][strlen(str[i]) - 1] = '\0';
		i++;
	}
	p[--i] = '\0';
	lineSort(p, i);
	printLines(p,i );
	return 0;
}