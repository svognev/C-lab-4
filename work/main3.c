#include <stdio.h>
#include <string.h>
#include "task3.h"
#define N 128

int main()
{
	char str[N] = { 0 };

	printf("Enter a string, please:\n");
	fgets(str, N, stdin);
	str[strlen(str) - 1] = '\0';

	if (isPalindrome(str))
		printf("This string is palindrome!\n");
	else printf("This string is not palindrome!\n");

	return 0;
}