#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1024


int main()
{
	int count = 0;

	char in[SIZE];	//Массив char исходный
	char out[SIZE];	//Массив char конечный
	//Организация ввода
	printf("Enter a string for analysis: ");
	fgets(in, SIZE - 1, stdin);
	//Вызываем базовую функцию
	reverseWords(in, out);
	//Осуществляем печать
	printf("%s\n", out);
	return 0;
}

