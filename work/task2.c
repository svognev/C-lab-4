#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include "task2.h"
#define N 256

char *reverseWords(char *in, char *out)
{
	
	char *temp[10] = {0};

    int i=0,j=0;
 

    printf("\n");
    temp[i]=strtok(in," ");
    i++;
    
    while (temp[i-1]!=NULL)
    {
        temp[i]=strtok(NULL," ");
        i++;
    }
   
    for(j=(i-2);j>=0;j--)
    {   out=temp[j];
        printf("%s ",out);
    }
        printf("\n");
    
    return out;
}

