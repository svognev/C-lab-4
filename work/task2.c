#include <stdio.h>
#include <stdlib.h>
#include "task2.h"

char * reverseWords(char *in, char *out)
{
	char *words[SIZE2] = { NULL };
	char *out_text = out;
	char *s = NULL;
	
	int i = 0, inWord = 0, count = 0;

	while (in[i])
	{
		if (in[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			words[count] = &(in[i]);
			if (in[i + 1] == '\0')
			{
				inWord = 0;
				count++;
				break;
			}
		}
		else if (in[i] == ' ' && inWord == 1)
		{
			inWord = 0;
			count++;
		}
		else if (in[i] != ' ' && inWord == 1)
		{
			if (in[i + 1] == '\0')
			{
				inWord = 0;
				count++;
				break;
			}
		}
		i++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		s = words[i];
		while (*s != ' ' && *s != '\0')
			*out_text++ = *s++;
		if (i > 0)
			*out_text++ = ' ';
	}
	*out_text = '\0';

	return out;
}