#define N 30
#define IN 1
#define OUT 0
#include <string.h>
#include <stdio.h>

char * reverseWords(char * in, char *out)
{
	int flag = OUT;
	int count = 0;
	int i = 0;
	char* arrPtr[N] = { 0 };
	int size = strlen(in);
	if (in[size-1] == '\n')
	{
		//in[size - 1] = ' ';
		in[size-1] = '\0';
	}
	

	while (*in)
	{
		if (*in != ' ' && flag == OUT)
		{
			arrPtr[count++] = in;
			flag = IN;
		}
		else if(*in == ' ')
			flag = OUT;
		in++;
	}
	
	while (count--)
	{
		while (*arrPtr[count] != ' ')
		{
			if (*arrPtr[count] == '\0')
				break;
			*(out+i) = *arrPtr[count];
			i++;
			*(arrPtr[count]++);
		}
		*(out+i) = ' ';
		i++;
	}
	i--;
	*(out+i) = '\0';
	return out;
}