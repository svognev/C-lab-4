#include <stdio.h>
#include <string.h>
#include "task3.h"

#define SIZE 100

int main()
{
	char str[SIZE] = {"abba abba" };
	printf("Enter a line please:\n");
	fgets(str, SIZE, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	if (isPalindrome(str) == 1)
		printf("String is palindrome\n");
	else
		printf("String isn't palindrome\n");
	return 0;
}
