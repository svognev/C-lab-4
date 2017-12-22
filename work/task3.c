#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char *str)
{
	int res = 1;
	char *p1 = str, *p2 = str + (strlen(str) - 1);

	while ((p2 - p1) > 0)
	{
		if (*p1++ != *p2--)
		{
			res = 0;
			break;
		}
	}

	return res;
}