#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"task2.h"

#define N 100

int main()
{
	char buf[N];
	char out[N];
	
	printf("Enter line \n");
	fgets(buf, N, stdin);
	
	printf("%s\n", reverseWords(buf, out));
	return 0;
}
