#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"
#define N 100

int main()
{
	char str[N];
	puts("Enter your string");
	fgets(str, N, stdin);
	str[strlen(str) - 1] = '\0';
	if (isPalindrome(str))
		printf("\n\"%s\" is a palindrome.\n\n", str);
	else
		printf("\n\"%s\" is not a palindrome.\n\n", str);
	return 0;
}