#include <stdio.h>
#include <string.h>
#define M 128
#define IN 1
#define OUT 0


char *reverseWords(char *in, char *out)
{
	int flag = OUT;
	int i = 0, j = 0, k = 0;
	char *words[M] = { 0 };

	while (i < strlen(in))
	{
		if (in[i] != ' ' && flag == OUT)
		{
			flag = IN;
			words[j++] = &in[i++];
		}
		else if (in[i] != ' ' && flag == IN)
		{
			i++;
		}
		else if ((in[i] == ' ' || in[i] == '\0') && flag == IN)
		{
			flag = OUT;
			i++;
		}
	}

	i = 0;

	for (k = j - 1; k >= 0; k--)
	{
		while (*words[k] != ' ' && *words[k] != '\0')
		{
			*(out + i) = *words[k];
			i++;
			*(words[k]++);
		}
		if (k > 0)
		{
			*(out + i) = ' ';
			i++;
		}
	}
	*(out + i) = '\0';

	return out;
}