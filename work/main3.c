/*
Программа, которая запрашивает строку и определяет, 
не является ли строка палиндромом
(одинаково читается и слева направо и справа налево).
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task3.h"
#define SIZE3 80

int main()
{
	char text[SIZE3] = { 0 };
	printf("Please, enter the line: \n\n");
	fgets(text, SIZE3, stdin);
	int len = strlen(text);
	if (text[len - 1] == '\n')
		text[len - 1] = '\0';

	if (isPalindrome(text))
		printf("\n""This srting is a palindrome. \n\n");
	else
		printf("\n""This srting is not a palindrome. \n\n");

	return 0;


}

