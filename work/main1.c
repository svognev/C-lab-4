/*
 * main1.c
 *
 *  Created on: 9 янв. 2018 г.
 *      Author: michael
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.h"

#define M 256
#define N 64

int main (){

//	сортирует и вывод введеный пользователем массив строк
//	по возрастанию длины строки

	char arr[N][M];
	char *pointers[N];
	int count = 0;

	puts("Enter line");
	while (count < N && *fgets(arr[count],256,stdin) != '\n'){
		pointers[count] = arr[count];
		count++;
		puts("Enter next line or press 'Enter' to exit");
	}

	lineSort(pointers, count);
	printLines(pointers, count);

	return 0;
}
