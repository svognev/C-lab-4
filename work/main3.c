#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"
#define BUF_SIZE 1000

int main()
{
	char in[BUF_SIZE + 1] = { '\0' };
	printf("Enter your string: ");
	fgets(in, BUF_SIZE, stdin);
	in[strlen(in) - 1] = '\0'; // remove '\n'
	if (isPalindrome(in))
		puts("Palindrome");
	else
		puts("Not a palindrome");
	return 0;
}