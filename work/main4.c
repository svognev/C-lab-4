#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "task4.h"
#include "task1.h"
#define SIZEM 128
#define LSTR 512

int main(int argc, char * argv[])	
{
	char fin[256] = { 0 };
	char fout[256] = { 0 };
	
	switch (argc)
	{
	case 2:
	{
		strcpy(fin, argv[1]);
		strcpy(fout, argv[1]);
		break;
	}
	case 3:
	{
		strcpy(fin, argv[1]);
		strcpy(fout, argv[2]);
		break;
	}
	default:
	{
		strcpy(fin, "test.txt");
		strcpy(fout, "test.txt");
		break;

	}
	}

	FILE *mf;	
	char *str[SIZEM];	//Массив указателей на строки	
	mf = fopen(fin, "r");
	if (mf == NULL) //Проверка наличия файла и его открытия
	{ 
		printf("error open file in\n"); 
		return -1; 
	}
	int i;	//Счётчик прочитанных строк
	for(i = 0; i < SIZEM; i++)
	{
		char *stroka;	//Указатель на строку
		stroka = (char*)malloc(LSTR * sizeof(char));	//Выделяем память под строку и записываем адрес в указатель		
		str[i] = fgets(stroka, LSTR, mf);	//Чтение одной строки из файла
		stroka[strlen(stroka) - 1] = '\0';
		//Проверка на конец файла или ошибку чтения
		if (str[i] == NULL)
		{
			// Проверяем, что именно произошло: кончился файл или это ошибка чтения
			if (feof(mf) != 0)
			{
				//Если файл закончился, выводим сообщение о завершении чтения и выходим из бесконечного цикла
				//printf("read end file in\n");
				break;
			}
			else
			{
				//Если при чтении произошла ошибка, выводим сообщение об ошибке и выходим из бесконечного цикла
				printf("err read file in\n");
				break;
			}
		}	
	}
	//Закрываем файл
	//printf("close file in\n");
	if (fclose(mf) == EOF)
	{
		printf("error close file in\n");
	}
	lineSort(str, i);
	mf = fopen(fout, "w");
	if (mf == NULL)
	{
		printf("error open file out\n");
		return -1;
	}
	printLinesToFile(str, i, mf);
	return 0;
}
