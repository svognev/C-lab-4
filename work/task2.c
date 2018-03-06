#include <stdio.h>
#include <string.h>
#include "task2.h"

#define IN 1
#define OUT 0
#define N 256

char * reverseWords(char * in, char * out)
{
	char * words[N] = {'0'};
	int i = 0, count = 0, status = OUT;

	while (*in)
	{
		if (*in != ' ' && status == OUT)
		{
			words[count++] = in;
			status = IN;
		}
		else if (*in == ' ')
			status = OUT;
		in++;
	}

	while (count--)
	{
		while (*words[count] != ' ' && *words[count] != '\0')
		{
			out[i] = *words[count];
			i++;
			*(words[count]++);	
		}
		out[i] = ' ';
		i++;
	}

	out[--i] = '\0';

	return out;
}
