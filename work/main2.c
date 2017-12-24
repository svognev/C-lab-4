#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task2.h"

int main()
{
	char in[BUF_SIZE + 1] = { '\0' };
	char out[BUF_SIZE + 1] = { '\0' };
	printf("Enter your string: ");
	fgets(in, BUF_SIZE, stdin);
	in[strlen(in) - 1] = '\0'; // remove '\n'
	puts(reverseWords(in, out));
	return 0;
}