#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "task3.h"
#define SIZE 256


int main()
{
	char str[SIZE] = { 0 };
	printf("Enter a string:\n");
    fgets(str, SIZE, stdin);
	isPalindrome(str)?printf("It is polyndrom!\n"):
		printf("It does not polyndrom!\n");
	return 0;
}