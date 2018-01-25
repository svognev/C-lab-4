#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define SIZE 1024
#define IN 1
#define OUT 0


char * reverseWords(char * in, char *out)	//функция, переворачивающая слова из in и записывающую их в out
{	
	char *arrp[64];	
	int flag = OUT;
	int count = 0;	//Количество слов == количество элементов *arrp[]

	in[strlen(in) - 1] = '\0';
	//-----------------------------------------------------------------
	//Находим и записываем первые символы всех слов в массив указателей
	for (int i = 0; in[i] != 0; i++)
	{
		if (in[i] != ' ' && flag == OUT)
		{
			flag = IN;
			arrp[count] = &in[i];
			count++;
		}
		else if (in[i] == ' ' && flag == IN)
		{
			flag = OUT;
		}
	}
	//-----------------------------------------------------------------
	//Выполняем формирование новой строки
	for (int i = 0, j = 0; ;)
	{

	}


	//-----------------------------------------------------------------



	return out;
}


int wordCount(char buf[])
{
	int flag = OUT;
	int count = 0;

	buf[strlen(buf) - 1] = '\0';

	for (int i = 0; buf[i] != 0; i++)
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			flag = IN;
			count++;
		}
		else if (buf[i] == ' ' && flag == IN)
		{
			flag = OUT;
		}
	}
	return count;
}

	




	

int main()
{
	int count = 0;
	char in[SIZE];	//Массив char исходный
	char out[SIZE];	//Массив char конечный
	//Организация ввода
	printf("Enter a string for analysis: ");
	fgets(in, SIZE - 1, stdin);
	in[strlen(in) - 1] = '\0';
	//Вызываем базовую функцию
	reverseWords(in, out);
	//Осуществляем печать
	printf("%s\n", out);
	return 0;
}

