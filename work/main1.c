#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.h"
#define SIZEM 64
#define SIZES 1024



int main()
{
	int count = 0;
	char buf[SIZEM][SIZES];	//Двумерный массив char
	//char buf[][250] = { {"stroke #1 s 0 and n\n"}, {"stroka tolko 0\0"}, {"stroka tolko n\n"}, {"\0"} };	//Двумерный массив char

	char *pbuf[SIZEM];	//Массив указателей на массивы char

	for (int i = 0; i < SIZEM; i++)
	{
		printf("Enter a string for analysis: ");
		fgets(buf[i], SIZES - 1, stdin);
		buf[i][strlen(buf[i]) - 1] = '\0';
		if (strlen(buf[i]) == 0)
		{
			break;
		}
		pbuf[i] = buf[i];	//Записываем в элемент i массива указателей pbuf адрес массива buf[i]
		count++;
	}
	lineSort(pbuf, count);	
	printLines(pbuf, count);
	return 0;
}

