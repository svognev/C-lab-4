#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "task1.h"


int compare(const void *p1, const void *p2)
{
    const char *s1,*s2;
    s1=*(char**)p1;
    s2=*(char**)p2;
    return strcmp(s1,s2);
    
}

void lineSort(char *pstr[],int size)
{
   qsort(pstr,size,sizeof(char*),compare); //size-number of elements in the arr. pointed by base
  
}

void printLines(const char *pstr[],int size)
{
 
    for(int i=0;i<size;i++)
    {
    printf("%s",pstr[i]);
    }
 

}


