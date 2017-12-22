#include <stdio.h>
#include <stdlib.h>
#include "task2.h"

char * reverseWords(char *in, char *out)
{
	char *words[BUF_SIZE] = { NULL };
	char *p = NULL, *outT = out;
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
		p = words[i];
		while (*p != ' ' && *p != '\0')
			*outT++ = *p++;
		if (i > 0)
			*outT++ = ' ';
	}
	*outT = '\0';

	return out;
}