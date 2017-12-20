#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"
#define N 25

int isPalindrome(char * str) {
	
	char *start = str;
	char *end = str + (strlen(str) - 1);
	
	while (start < end)
	{
		if (*start == *end) {
			start++;
			end--;
		}
		else
			return 0;
	}
	return 1;
}