#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "task2.h"
#define SIZE 256


int main()
{
	char str[SIZE] = { 0 };
	char final[SIZE] = { 0 };
	printf("Enter a string:\n");
	fgets(str, SIZE, stdin);

	printf("%s\n", reverseWords(str, final));
	return 0;

}