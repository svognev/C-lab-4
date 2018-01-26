#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1024

int main()
{
	int count = 0;
	char str[SIZE];	//Строка

	printf("Enter a string for analysis: ");
	fgets(str, SIZE - 1, stdin);

	if (isPalindrome(*str))
	{
		printf("The string is a palindrome");
	}
	else
	{
		printf("The string is not a palindrome");
	}
	return 0;
}