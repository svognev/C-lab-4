#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task3.h"
#define SIZE 1024

int main()
{
	int count = 0;
	char str[SIZE];	//Строка

	printf("Enter a string for analysis: ");
	fgets(str, SIZE - 1, stdin);

	if (isPalindrome(str) == 1)
	{
		printf("The string is a palindrome\n");
	}
	else
	{
		printf("The string is not a palindrome\n");
	}
	return 0;
}