#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "task4.h"
//#include "task1.h"
#define SIZEM 64
#define LSTR 512


int main()
{
	FILE *mf;	
	char *str[SIZEM];	//Массив указателей на строки				
	if ((mf = fopen("test.txt", "r")) == NULL) //Проверка наличия файла и его открытия
	{ 
		printf("error\n"); 
		return -1; 
	}
	int i;	//Счётчик прочитанных строк
	for(i = 0; i < 64; i++)
	{
		char *stroka;	//Указатель на строку
		stroka = (char*)malloc(LSTR * sizeof(char));	//Выделяем память под строку и записываем адрес в указатель		
		str[i] = fgets(stroka, LSTR, mf);	//Чтение одной строки из файла
		//Проверка на конец файла или ошибку чтения
		if (str[i] == NULL)
		{
			// Проверяем, что именно произошло: кончился файл или это ошибка чтения
			if (feof(mf) != 0)
			{
				//Если файл закончился, выводим сообщение о завершении чтения и выходим из бесконечного цикла
				printf("\nЧread end\n");
				break;
			}
			else
			{
				//Если при чтении произошла ошибка, выводим сообщение об ошибке и выходим из бесконечного цикла
				printf("\nerr read\n");
				break;
			}
		}			
		else
		{
			i++;
		}
	}
	//Закрываем файл
	printf("close file : ");
	if (fclose(mf) == EOF)
	{
		printf("error\n");
	}
	lineSort(str, i);
	//mf = fopen("test.txt", "w");	//Открытие файла в который будет производиться запись
	printLinesToFile(str, i, mf);
	return 0;
}

void lineSort(char *str[], int size)
{
	for (int i = 0; i < size; i++)
	{
		char *tmp;
		int minPosition = i;
		for (int j = i + 1; j < size; j++)
		{
			if (strlen(str[minPosition]) > strlen(str[j]))
			{
				minPosition = j;
			}
		}
		tmp = str[minPosition];
		str[minPosition] = str[i];
		str[i] = tmp;
	}
}