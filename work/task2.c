#include<stdio.h>
#include <string.h>
#include "task2.h"

char *reverseWords(char *in, char *out)
{
    char string[]="burya mglou nebo kroet";
    char *temp[10];
    
    in=0;
    out=0;
    int i=0,j=0;
    in=string;
    printf("%s\n",in);

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
    
    return 0;
}

