#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"
#define N 100

int isPalindrome(char * str)
{
	int start = 0, end = strlen(str) - 1;

	while (start < end)
	{
		if (str[start] != str[end])
			return 0;
		start++;
		end--;
	}
	return 1;
}