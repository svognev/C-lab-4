#include <stdio.h>
#include <string.h>
#include "task2.h"

#define IN 1
#define OUT 0
#define SIZEBUF 200

char * reverseWords(char*in, char*out)
{
	int flag = OUT;
	int i = 0, j = 0;
	int count = 0;
	char *buf[SIZEBUF];
	int n = 0;
	while (in[i] != '\0')
	{
		if (in[i] != ' ' && flag == OUT)
		{
			flag = IN;
			buf[j] = &in[i];
			j++;
		}
		else if (in[i] == ' ' && flag == IN)
			flag = OUT;
		i++;
	}
	count = j - 1;
	for (; count >= 0; count--)
	{
		int k = 0;
		while (buf[count][k] != '\0' && buf[count][k] != ' ')
		{
			out[n++] = buf[count][k++];
		}
		if (count != 0)
			out[n++] = ' ';
	}
	out[n] = '\0';
}
