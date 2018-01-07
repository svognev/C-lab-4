
#include <stdio.h>
#include <string.h>
#include "task3.h"

#define N 20

int main() {
   
    char str[N]={0};
    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);

	str[strlen(str) - 1] = '\0';

	if (isPalindrome(str))
	{
		printf("%s is palindrome\n", str);
	}
	else
	{
		printf("%s is not a palindrome\n", str);
	}

	return 0;
   
}
