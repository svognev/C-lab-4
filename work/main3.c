#include <stdio.h>
#include "task3.h"

#define M 50

int main()
{
	char str[M] = { 0 };

	printf("Enter palindrome: \n");
	fgets(str, M, stdin);
	str[strlen(str) - 1] = '\0';

	if (isPalindrome(str))
		printf("The text is palindrome. \n");
	else
		printf("The text is not palindrome. \n");

	return 0;
}