#include "task4.h"
#define M 200
//#include<stdio.h>
int main()
{
	int i = 0,size=0;
	char *str[SIZE];
	char txt[SIZE][M] = { 0 };
	char word = " ";
	FILE *fp=fopen("fp.txt", "r");//a file must lay in the programm folder with name "fp.txt", the file is only for read
	FILE *fpFinal = fopen("fpFinal.txt", "w");//a new file will be created in the programm folder , the file is write only
	if (fp == NULL || fpFinal == NULL) {
		puts("File error!");
		return 1;
	}
	while ((str[i]=fgets(txt[i],M,fp))!=NULL)
	{
		i++;
	}
	lineSort(str, i);// function for sort of line
	printLinesToFile((const)str, i, fpFinal);//function for print
	fclose(fp);
	fclose(fpFinal);
	return 0;
}

