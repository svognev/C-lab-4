/*
 * main3.c
 *
 *  Created on: 13 янв. 2018 г.
 *      Author: michael
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task3.h"

int main(){
	char str[128];

	printf("Enter test string:");
	fgets(str, 128, stdin);

	str[strlen(str)-1] = 0;

	switch (isPalindrome(str)) {
		case 1:
			puts("It's polindrome !");
			break;
		case 0:
			puts("It's not a polindrome !");
			break;
		default:
			puts("It's imposible");
			break;
	}

	return 1;
}
