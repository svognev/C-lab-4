#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task4.h"

int scmp(const void *p1, const void *p2)
{
    const char *s1,*s2;
    s1=*(char**)p1;
    s2=*(char**)p2;
    return strcmp(s1,s2);
}

void lineSort(char *str[],int size)
{
    qsort(str,size,sizeof(char*),scmp);
    
}
void printLinesToFile(const char *str[],int size, FILE *ofp)
{
    
    for(int i=0;i<size;i++)
    {
        fprintf(ofp,"%s",str[i]);
        free((char*)str[i]);
        
    }
   
}
