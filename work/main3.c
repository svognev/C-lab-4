
#include <stdio.h>
#include <string.h>
#include "task3.h"

#define N 20

int main() {
   
    char str[N]={0};
    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);

    
    isPalindrome(str);
   
}
