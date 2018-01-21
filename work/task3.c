#include <stdio.h>
#include "task3.h"

int isPalindrome(char * str)
{
	char *begin = str;
	char *end = str + (strlen(str) - 1);

	while (begin < end)
	{
		if (*begin == *end)
		{
			begin++;
			end--;
		}
		else
			return 0;
	}
	return 1;
}
