/*
 * main2.c
 *
 *  Created on: 11 янв. 2018 г.
 *      Author: michael
 */

#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include "task2.h"

int main(){
	char str[128];
	char reversed_str[128];
	printf("Enter string\n");
	fgets(str, 128, stdin);

	puts(reverseWords(str, reversed_str));
//	printf("%ld - %ld", strlen(str), strlen(reversed_str));
	return 0;
}
