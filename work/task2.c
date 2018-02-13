#include<stdio.h>
#include <string.h>
#include "task2.h"
#define N 256


char *reverseWords(char *in, char *out)
{
    char *temp[10] = {0};
    
    int i=0,j=0;
    char *p_out=out;
    char *p_temp=NULL;
    
    printf("\n");
    temp[i]=strtok(in," ");
    i++;
    
    while (temp[i-1]!=NULL)
    {
        temp[i]=strtok(NULL," ");
        i++;
    }
  
    for(j=(i-2);j>=0;j--)
    {
        p_temp=temp[j];
        while (*p_temp!=' ' && *p_temp!='\0')
            *p_out++=(*p_temp++);
            *p_out++=' ';
    }

 //   *p_out='\0';
    p_out[j]='\0';
    
    return out;
}
