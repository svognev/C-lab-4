#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "task2.h"

#define SIZE 200

int main()
{
	char line[SIZE];
	char reversed[SIZE];
	
	puts("Enter a string to reverse:");
	fgets(line, SIZE, stdin);
	line[strlen(line)-1] = '\0';

	puts(reverseWords(line, reversed));

	return 0;
}