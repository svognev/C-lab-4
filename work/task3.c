#include <stdio.h>
#include <string.h>
#include "task3.h"

int isPalindrome(char *str)
{
   // int lenght;
    int flag=1;
    size_t lenght=strlen(str);
   // char *first=str;
   // char *last=str[lenght-1];
    
    for(int i=0;i<(lenght-1)/2;i++)
    {
        
        if(str[i] != str[lenght-1-i])
        {
            flag=0;
            break;
        }
    }
    
    
    return flag;
    
}
