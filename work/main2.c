#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main()
{
	int i = 0, j = 0,size=0;
	char in[SIZE] = {0};
	char *out[SIZE] = {0};
	printf("Enter line of word:\n");
	gets(in, SIZE, stdin);//record string in array
	reverseWords(in, out);// rewerse of words
	while (out[j]!= NULL)//print result
	{
		fputs(out[j], stdout);
		fputs(" ", stdout);
		j++;
	}
	size = j - 1;
	fputs("\n", stdout);
		
	return 0;
}
