#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"
#define N 25

int main()
{
	char str[N] = { 0 };
	printf("Enter string:\n");
	fgets(str, N, stdin);
	str[strlen(str) - 1] = '\0';
	if (isPalindrome(str))
		printf("The line is Palindrome");
	else
		printf("The line is NOT Palindrome");
	return 0;
}