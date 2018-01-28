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
	
	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			word[j] = &buf[i];
			j++;
		}
		else if (buf[i] == ' ')
		{
			inWord = 0;
		}
		i++;
	}
			
	/*printf("j=%d\n", j);
	for (i = 0; i < j; i++)
	{
		printf("word %s\n", word[i]);
	}*/

	while (j--)
	{
		while (*word[j] != ' ')
		{
			if (*word[j] == '\0')
				break;

			out[k] = *word[j];
			*(word[j]++);
			k++;
		}
		out[k] = ' ';
		k++;
	}

	out[strlen(out)-1] = '\0';

	return out;
}
