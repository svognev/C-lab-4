/*
ѕрограмма, котора€ позвол€ет пользователю ввести несколько строк 
с клавиатуры, а затем выводит их в пор€дке возрастани€ длины строки.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task1.h"

#define TR1 25 //max кол-во строк
#define COLS1 80 //max кол-во символов в одной строке

int main()
{
	char text[TR1][COLS1] = { 0 };
	char *pstr[TR1] = { NULL };
	int count = 0;
	printf("This program sorts the rows in ascending order. \n"
		"Enter the strings. To end input, enter blank line. \n\n");

	while ((count < TR1) && (*fgets(text[count], COLS1, stdin) != '\n'))
		pstr[count] = text[count++];

	lineSort(pstr, count);
	printf("\n\nStrings, sorted in ascending order: \n\n");
	printLines(pstr, count);
	printf("\n");
	return 0;
}