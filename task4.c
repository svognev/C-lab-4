/*
 * task4.c
 *
 *  Created on: 13 янв. 2018 г.
 *      Author: michael
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

void printLinesToFile(const char *str[],int size, FILE *fp){
	//печатает строки
	for (int i = 0; i < size; i++){
		fprintf(fp, str[i]);
	}
}

