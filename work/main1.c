#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZEM 64
#define SIZES 1024

int main()
{
	char buf[SIZEM][SIZES];	//Двумерный массив char
	char *pbuf[SIZEM];	//Массив указателей на массивы char

	for (int i = 0; i < SIZEM; i++)
	{
		printf("Enter a string for analysis: ");
		fgets(buf[i], SIZES - 1, stdin);
		if (strlen(buf[i]) == 0)
		{
			break;
		}
		*pbuf[i] = &buf[i];
	}
	

	return 0;

}