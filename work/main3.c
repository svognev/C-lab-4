#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"task3.h"

#define N 100

int main()
{
	char str[N] = {0};
		
	printf("Enter your str \n");
	fgets(str, N, stdin);

	str[strlen(str) - 1] = '\0';

	if (isPalindrome(str)==1)
		printf("It's palindrome \n");
	else
		printf("It's not palindrome \n");

	return 0;
}
