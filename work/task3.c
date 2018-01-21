#include <stdio.h>
#include <string.h>
#include "task3.h"

int isPalindrome(char * str)
{
	int i = 0;
	int j = strlen(str)-1;

	while (i < j)
	{
		if (str[i++] != str[j--])
			return 1;
	}
	return 0;
}