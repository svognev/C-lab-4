#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define M 15
#define IN 1
#define OUT 0
#include "task2.h"

char * reverseWords(char * in, char *out)
{
	char *arr[M] = { 0 };
	int i = 0, j = 0;
	int flag = OUT;
	int count = 0;
	while (in[i])
	{
		if (in[i] != ' ' && flag == OUT)
		{
			arr[j] = in + i;
			flag = IN;
			j++;
			count++;
		}
		else if (in[i] == ' ' && flag == IN)
		{
			flag = OUT;
		}
		i++;
	}
	
	flag = OUT;
	j = 0;
	count = count-1;
	int k = 0;
	while (count >= 0)
	{
		if (arr[count][k] != ' ' && arr[count][k] != '\0' && flag == OUT)
		{
			flag = IN; 
			out[j] = arr[count][k];
			j++;
			k++;
		}
		else if (arr[count][k] != ' ' && arr[count][k] != '\0' && flag == IN)
		{
			out[j] = arr[count][k];
			j++;
			k++;
		}
		else if (arr[count][k] == ' ' && flag == IN && count)
		{
			flag = OUT;
			out[j] = ' ';
			count--;
			j++;
			k = 0;
		}
		else if (arr[count][k] == ' ' && flag == IN && !count)
		{
			flag = OUT;
			out[j] = '\0';
			count--;
			j++;
			k = 0;
		}
		else if (!(arr[count][k]) && (flag == IN))
		{
			flag = OUT;
			out[j] = ' ';
			count--;
			j++;
			k = 0;
		}
	}

	return out;
}