#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100

int isPalindrome(char * str)
{
	char *str_in;
	char *str_out;
	int len = 0;
	int i = 0;

	str_in = str;
	len = strlen(str);
	str_out = str+(len-1);
	
	while(i<len)
	{
		if (*str_in == *str_out)
		{
			str_in++;
			str_out--;
		}
		else
		{
			return 0;
			break;
		}
		i++;
	}
	
	return 1;
}
