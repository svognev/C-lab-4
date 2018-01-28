#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "task4.h"
#include "task1.h"
#define SIZEM 64
#define LSTR 512

/* argc хранит количество параметров, а argv[] указатели на эти параметры.
Например, если мы запустим исполняемый файл "fgets_example param1 param2", 
то argc будет равно 3, а argv[] = {"fgets_example", "param1", "param2"}*/
int main(int argc, char* argv[])	
{
	/*char fin[] = argv[0];//Файл для чтения
	char fout[] = argv[1];//Файл для записи
	*/

	FILE *mf;	
	char *str[SIZEM];	//Массив указателей на строки
	mf = fopen("test.txt", "r");
	if (mf == NULL) //Проверка наличия файла и его открытия
	{ 
		printf("error open\n"); 
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
				printf("\nread end\n");
				break;
			}
			else
			{
				//Если при чтении произошла ошибка, выводим сообщение об ошибке и выходим из бесконечного цикла
				printf("\nerr read\n");
				break;
			}
		}	
	}
	//Закрываем файл
	printf("close file\n");
	if (fclose(mf) == EOF)
	{
		printf("error close file\n");
	}
	lineSort(str, i);
	mf = fopen("test1.txt", "w");
	if (mf == NULL)
	{
		printf("error open file\n");
		return -1;
	}
	printLinesToFile(str, i, mf);
	return 0;
}
