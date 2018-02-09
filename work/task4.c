#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printLinesToFile(const char *str[], int size, FILE *fp)
{
	for (int i = 0; i < size; i++)
	{
		fwrite(str[i], sizeof(char), strlen(str[i]), fp);
		fputc('\n', fp);
		/*if (strlen(str[i]) >= 1)
		{
			fwrite(str[i], sizeof(char), strlen(str[i]), fp);
			fputc('\n', fp);
		}*/
	}
	/*
	if (fclose(fp) == EOF)
	{
		printf("error close file out\n");
	}
	*/
}

