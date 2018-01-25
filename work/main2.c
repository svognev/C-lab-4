#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define SIZE 1024



char * reverseWords(char * in, char *out)	//функция, переворачивающая слова из in и записывающую их в out
{
	
	






	return out;
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

