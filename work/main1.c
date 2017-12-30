#include<stdlib.h>
#include <string.h>
#include <stdio.h>
#include "task1.h"
#define N 50
#define M 80

int main() {
   char text[N][M]={'\0'};
   char *pstr[N];

    int count =0;

    
    printf("Enter some strings: \n");
    while(count<N && *fgets(text[count],M,stdin) != '\n')
    {
      pstr[count]=text[count];
        count++;
    }


    lineSort(pstr,count);
    printLines((const char**)pstr,count);
    printf("\n");

    return 0;
}
