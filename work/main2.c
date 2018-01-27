#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"
#define N 25

int main() {
	
	char in[N] = { 0 };
	char out[N] = { 0 };
	printf("Enter a string:\n");
	fgets(in, N, stdin);
	in[strlen(in) - 1] = '\0';
	reverseWords(in, out);
	printf("%s\n", out);

	return 0;
}