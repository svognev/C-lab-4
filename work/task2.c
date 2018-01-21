#include <stdio.h>
#include <string.h>
#include "task2.h"

#define ON 1
#define OFF 0
#define M 256

char * reverseWords(char * in, char * out)
{
	char *arr[M] = { 0 };
	int i = 0; // j = 0, k = 0
	int count = 0;
	int flag = OFF;

	while (*in)
	{
		if (*in != ' ' && flag == OFF)
		{
			arr[count++] = in;
			flag = ON;
		}
		else if (*in == ' ')
			flag = OFF;
			in++;
	}

	while (count--)
	{
		while (*arr[count] != ' ')
		{
			if (*arr[count] == '\0')
				break;
			*(out + i) = *arr[count];
			i++;
			*(arr[count]++);
			
		}
		*(out + i) = ' ';
		i++;
	}
	i--;
	*(out + i) = '\0';

	return out;
}
