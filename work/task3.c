#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task3.h"

int isPalindrome(char * str)
{
	int palind = 1;
	int len = strlen(str);
	char * start = &str[0];
	char * end = &str[len - 1];
	int i, j;
	while (start < end)
	{
		if (*start != *end)
		{
			palind = 0;
			break;
		}
		start++;
		end--;
	}
	return palind;
}