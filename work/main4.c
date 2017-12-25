/*
Программа, сортирующая строки, прочитанные из текстового файла,
в порядке возрастания длины строки.
Результат работы программы также записывается в файл.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include "task4.h"
#define TR4 25 //max кол-во строк
#define COLS4 80 //max кол-во символов в одной строке

int main() {

	FILE *fpR;
	fpR = fopen("task4R.txt", "r");
	if (fpR == NULL)
	{
		puts("I can't open task4R.txt!");
		return 1;
	}

	char text[TR4][COLS4] = { 0 };
	char *pstr[TR4] = { NULL };
	int count = 0;
	//printf("This progr\n");

	while ((count < TR4) && (fgets(text[count], COLS4, fpR) != '\n'))
		pstr[count] = text[count++];

	fclose(fpR);

	FILE *fpW;
	fpW = fopen("task4W.txt", "w+");
	if (fpR == NULL)
	{
		puts("I can't open task4W.txt!");
		return 1;
	}


	lineSort(pstr, count);
	//printf("\n\nStrings \n\n");
	printLinesToFile(pstr, count, fpW);

	//fclose(fpR);
	fclose(fpW);

	//printf("\n");
}