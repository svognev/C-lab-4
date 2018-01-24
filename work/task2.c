/*
 * task2.c
 *
 *  Created on: 11 янв. 2018 г.
 *      Author: michael
 */


char * reverseWords(char * in, char *out){
	char *pointers[64][2];

	int i = 0;
	int count = 0;
	int in_word = 0;
	int p = -1;
	while (in[i]){
		if( in_word==0 && in[i]!=' '){
			in_word = 1;
			p++;
			pointers[p][0] = in+i;
			count++;
			i++;
		}else if( in_word && in[i]==' '){
			in_word = 0;
			pointers[p][1] = in+i;
			i++;
		}else{
			i++;
		}
	}
	pointers[p][1] = in+i-1;

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

	out[j] = '\0';

	return out;
}
