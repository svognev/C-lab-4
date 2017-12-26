#include <stdio.h>
#include <string.h>
#include "task3.h"

int isPalindrome(char *str)
{
    int lenght;
    int flag=0;
    lenght=strlen(str);
    char *first=str;
    char *last=&str[lenght-1];
    
    for(int i=0;i<=(lenght-1)/2;i++)
    {
        if(*(first+i) != *(last-i-1))
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("%s is not a palindrome\n", str);
    }
    else
    {
        printf("%s is palindrome\n",str);
    }
    
    
  return 0;

}
