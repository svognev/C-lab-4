#include <stdio.h>
#include <string.h>
#include "task2.h"

#define M 256

int main()
{
	char in[M] = { 0 };
	char out[M] = { 0 };

	printf("Enter some text:\n");
	fgets(in, M, stdin);
	in[strlen(in) - 1] = '\0';
	printf("Reversed line:\n");
	printf("%s\n", reverseWords(in, out));

	return 0;
}
