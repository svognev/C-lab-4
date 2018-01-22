/*
 * task1.c
 *
 *  Created on: 9 янв. 2018 г.
 *      Author: michael
 */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
	if (strlen(*(char**)a) > strlen(*(char**)b)){
		return 1;
	}else{
		return 0;
	}
}

void lineSort(char *str[],int size){
	//сортирует массив указателей по длине элемента
	qsort(str, size, sizeof(char*), compare);
}

void printLines(const char *str[],int size){
	//печатает строки
	for (int i = 0; i < size; i++){
		printf(str[i]);
	}
}
