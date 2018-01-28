#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100

char * reverseWords(char * buf, char *out)
{
	char *word[N];
	int count = 0;
	int len = 0, len1 = 0;
	int inWord = 0;
	int i = 0, k = 0, j = 0;

	len = strlen(buf);
	buf[len - 1] = ' ';

	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			word[j] = &buf[i];
		}
		else if (buf[i] == ' ' && inWord == 1)
		{
			inWord = 0;
			j++;
		}
		i++;
	}
			
	while (j--)
	{
		len1 = 0;
		if (*word[j] != ' ') 
		{
			len1 = strlen(word[j]);
			for (k; k < len1; k++)
			{
				out[k] = *word[j];
				*(word[j]++);
			}
		}
	}
	out[k-1] = '\0';

	return out;
}
