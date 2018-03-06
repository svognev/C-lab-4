#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task1.h"

#define STRINGS 20
#define CHARS 100

int main()
{
	char text[STRINGS][CHARS];
	char *str[STRINGS];
	int count = 0;

	puts("Enter a few strings (empty string to finish):");

	while ((count < STRINGS) && (*fgets(text[count], CHARS, stdin) != '\n'))
		str[count] = text[count++];
	lineSort(str, count);

	puts("The strings in ascending order:");
	printLines(str, count);
	puts(" ");

	return 0;
}