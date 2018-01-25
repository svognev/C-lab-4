#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task1.h"
#define N 25
#define M 80

int main()
{
	char text[N][M] = { 0 };   
	char *str[N] = { NULL };    
	int count = 0;			

	printf("Enter some lines:\n");
	while ((count < N) && (*fgets(text[count], M, stdin) != '\n'))
		str[count] = text[count++];

	lineSort(str, count);
	printf("Your lines was sorted by length:\n");
	printLines((const char**)str, count); 
	
	return 0;
}