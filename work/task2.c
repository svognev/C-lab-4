/*
 * task2.c
 *
 *  Created on: 11 янв. 2018 г.
 *      Author: michael
 */
#include <string.h>

char * reverseWords(char * in, char *out){
	char *pointers[64][2];

	int count = 0;
	int in_word = 0;

	for (int i=0; i <= strlen(in); i++){
		if (in_word==0 && in[i] != ' '){
			in_word = 1;
			pointers[count][0] = in + i;
		}else if (in_word==1 && (in[i] == ' ' || in[i] == '\0')){
			in_word = 0;
			pointers[count][1] = in + i;
			count++;
		}
	}
	count--;

	int j = 0;
	while(count>=0){
		for(int i = 0; i < pointers[count][1]-pointers[count][0]; i++){
			out[j] = *(pointers[count][0]+i);
			j++;
		}
		out[j] = ' ';
		count--;
		j++;
	}

	out[j-1] = '\0';

	return out;
}
