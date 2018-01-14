/*
 * main4.c
 *
 *  Created on: 13 янв. 2018 г.
 *      Author: michael
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task4.h"
#include "task1.h"

#define M 256
#define N 64

int main (){

//	сортирует и вывод введеный пользователем массив строк
//	по возрастанию длины строки

	char arr[N][M];
	char *pointers[N];
	int count = 0;
	char fname[32];
	FILE *fp;

	puts("Enter file name:");
	fgets(fname,32,stdin);
	fname[strlen(fname)-1] = 0;
	fp = fopen(fname,"rt");
	while (count < N && fgets(arr[count],256, fp) != NULL){
		pointers[count] = arr[count];
		count++;
	}
	fclose(fp);

	char * last_element = arr[count - 1];
	last_element[strlen(last_element)] = '\n';

	fp = fopen("result","wt");
	lineSort(pointers, count);
	printLinesToFile(pointers, count, fp);
	fclose(fp);
	return 1;
}
