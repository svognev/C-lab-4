/*
 * task4.c
 *
 *  Created on: 13 янв. 2018 г.
 *      Author: michael
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void printLinesToFile(const char *str[],int size, FILE *fp){
	//печатает строки
	for (int i = 0; i < size; i++){
		fprintf(fp, str[i]);
	}
}

