#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task4.h"

#define STRINGS 50
#define CHARS 100

int main()
{
	char text[STRINGS][CHARS] = { '\0' };
	char *str[STRINGS];
	FILE *master; 
	FILE *copy;
	master = fopen("master.txt", "r");
	copy = fopen("copy.txt", "w");
	if (master == NULL || copy == NULL)
		puts("File's opening is failed!\n");
	else
	{
		int i = 0;
		while (feof(master) == 0)
		{
			fgets(&text[i][0], CHARS, master);
			str[i] = &text[i][0];
			i++;
		}
		fclose(master);
		lineSort(str, i);
		printLinesToFile(str, i, copy);
		fclose(copy);
	}
	return 0;
}