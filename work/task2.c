#include "task2.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define OUT 0
#define IN 1
char *reverseWords(char *in, char *out[SIZE])
{
	int i = 0,j=0,len=0,count=0,inWord=OUT;
	char ch = " ";
	while ( (ch=*(in + i)) != '\0')// count number of Symbol
	{
		if (ch == ' ')
		{
			*(in+i) = '\0';//replace every gap to '\0' for  ease work with pointers
			inWord = OUT;
		}
		else
		{
			inWord++;
			if (inWord == 1)
				len++;// count number of word
		}
		i++;
	}
	*(out + len) = '\0';// replace the last string in array 'out' for ease work
	len--;
	j = i - 1;
	i = 0;
	inWord = 0;
	while (i<=j)//collect an array of pointers in reveerse order
	{
		if (in[i]!='\0')
		{
			inWord++;
			if (inWord == 1)
			{
				out[len] = &in[i];//the  first of letter each word = pointer
				len--;
			}
		}
		else
			inWord = OUT;
		i++;	
	}
	return out;
}
void printLines(const char *str[SIZE], int size)
{
	

}
