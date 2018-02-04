#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"task2.h"

#define N 100

int main()
{
	char buf[N] = { 0 };
	char out[N];

	printf("Enter line \n");
	fgets(buf, N, stdin);
	buf[strlen(buf)-1] = '\0';
	printf("%s", reverseWords(buf, out));
	return 0;
}
