#include "task2.h"
#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main()
{
	int i = 0, j = 0,size=0;
	char in[SIZE] = {0};
	char out[SIZE] = {0};
	printf("Enter line of word:\n");
	fgets(in, sizeof(in), stdin);//record string in array
	//char *in1 = "mad max";//for test
	reverseWords(in, out);// rewerse of words
	printf("%s\n",out);
	
		
	return 0;
}
