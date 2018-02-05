#include "task2.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define OUT 0
#define IN 1
#define SIZE 100 
char *reverseWords(char *in, char *out)
{
	int i = 0,j=0,len=0,count=0,inWord=OUT;
	
	char *p[SIZE];

	char ch = 0;
	char *buf = (char*)malloc(strlen(in)*sizeof(char));
	int k = 0;
	strcpy(buf, in);
	while ( (ch=buf[i]) != '\0')// count number of Symbol
	{
		if (ch == ' '|| ch=='\n')
		{
			buf[i] = NULL;//replace every gap to '\0' for  ease work with pointers
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
	p[len] = NULL;// replace the last string in array 'out' for ease work
	len--;
	j = i - 1;
	i = 0;
	inWord = 0;
	while (i<=j)//collect an array of pointers in reveerse order
	{
		if (buf[i]!='\0')
		{
			inWord++;
			if (inWord == 1)
			{
				p[len] = &buf[i];//the  first of letter each word = pointer
				len--;
			}
		}
		else
			inWord = OUT;
		i++;	
	}
	
	for (i = 0, j = 0;p[i] != NULL;i++)//create the 'out'
	{
		for (j = 0;(out[k] = (*(p + i))[j] )!= NULL;k++, j++);
		
		out[k++] = ' ';
		
	}
	out[--k] = '\0';
	
	free(buf);
	return out;
}
void printLines(const char str[SIZE], int size)
{
	

}
