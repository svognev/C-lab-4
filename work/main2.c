#include <stdio.h>
#include <string.h>
#include "task2.h"
#define N 128

int main()
{
	char in[N] = { 0 };
	char out[N] = { 0 };

	printf("Enter a string, please:\n");
	fgets(in, N, stdin);
	if (in[strlen(in) - 1] == '\n');
		in[strlen(in) - 1] = '\0';

	printf("Your string is reversed:\n");
	printf("%s\n", reverseWords(in, out));

	return 0;
}