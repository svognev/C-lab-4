#include <stdio.h>
#include <string.h>

int isPalindrome(char *str) 
{
	char *str_end = str + strlen(str) - 1;

	while (str < str_end)
	{
		if (*str == *str_end)
		{
			str++;
			str_end--;
		}
		else return 0;
	}
	return 1;
}