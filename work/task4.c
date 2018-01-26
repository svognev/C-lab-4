#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LSTR 512


void printLinesToFile(const char *str[], int size, FILE *fp)
{
	if ((fp = fopen("test.txt", "w")) == NULL)
	{
		printf("Файл невозможно открыть или создать\n");
	}
	else 
	{
		for (int i = 0; i < size; i++) 
		{
			fwrite(str[i],  sizeof(char), LSTR, fp);
		}
	}
	fclose(fp);
}