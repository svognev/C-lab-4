#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"task1.h"

#define N 25
#define M 80

int main()
{
	char text[N][M];
	char *pstr[N];
	int count =0;

	printf("Enter lines \n");
	while (count < N && *fgets(text[count], M, stdin) != '\n')
		pstr[count] = text[count++]; 

	lineSort(pstr, count);
	printLines(pstr, count);


	return 0;
}
