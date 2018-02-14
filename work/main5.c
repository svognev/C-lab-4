/*
 * main5.c
 *
 *  Created on: 14 янв. 2018 г.
 *      Author: michael
 */
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <stdio.h>



int main(){
	char *yong_p;
	char *old_p;
	char yong = 0;
	char old = 0;
	char count = 0;
	char buff[128];
	puts("Enter count of your relatives :");
	fgets(buff,128,stdin);
	count = atoi(buff);
	char ** relatives= (char**)malloc(sizeof(char*) * count);
	for (int i = count-1; i >= 0; i--){
		relatives[i] = (char*)malloc(sizeof(char) * 64);
	}
	while(count > 0){
		char *relative = relatives[count-1];
		char age = 0;

		puts("Enter name of your relative:");
		fgets(relative,64,stdin);
		relative[strlen(relative)-1] = 0;

		puts("Enter age of your relative:");
		fgets(buff,64,stdin);
		age = atoi(buff);

		if (yong == 0){
			yong = age;
			yong_p = relative;
		}else if (age < yong){
			yong = age;
			yong_p = relative;
		}

		if (age > old){
			old = age;
			old_p = relative;
		}

		count--;
	}

	puts("Youngest");
	puts(yong_p);
	puts("Oldest");
	puts(old_p);

	return 0;
}
