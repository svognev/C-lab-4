#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "task4.h"

#define MAXLINE 4096
#define IFNAME "in.txt"
#define OFNAME "out.txt"




int main() {
    FILE *ifp, *ofp;
    char *str[MAXLINE];
    char s[MAXLINE];
  
   
    int i, size;
  
    
    ifp=fopen(IFNAME,"r");
    
   if(ifp==NULL || (ofp=fopen(OFNAME, "w"))==NULL)
   {
       perror("fopen");
       return -1;
   }
    for(i=0;i<MAXLINE;)
    {
        if(fgets(s, sizeof(s), ifp)==NULL)
            break;
        if(*s !='\n')
        {
            str[i] = strdup(s);
            i++;
        }
      
    }
    size=i;
    lineSort(str, size);
    printLinesToFile((const char**)str, size, ofp);
    
    fclose(ifp);
    fclose(ofp);
    
    free(str[i]);
    return 0;
}
