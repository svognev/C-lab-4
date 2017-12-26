#include<stdio.h>
#include "task3.h"
#define SIZE 50
#include<string.h>
int main()
{
	char buf[SIZE] = { " " };
	char *str;
	int end = 0;
	printf("Enter string:\n");
	fgets(buf,SIZE,stdin);// record the string in array 'buf'
	if ((isPalindrome(buf)) > 0)
	{
			printf("The string is a paliondrome\n");
	}
else
{
	printf("The string isn't a paliondrome\n");
}
	return 0;
}
