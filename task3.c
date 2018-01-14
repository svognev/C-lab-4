/*
 * task3.c
 *
 *  Created on: 13 янв. 2018 г.
 *      Author: michael
 */
#include <string.h>
#include <stdio.h>

int isPalindrome(char * str){
	char end = strlen(str) - 1 ;
	char start = 0;

	while (start <= end){
		if (str[start] != str[end]){
			return 0;
		}
		start++;
		end--;
	}
	return 1;
}
