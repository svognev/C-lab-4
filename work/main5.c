#include <stdio.h>
#include <stdlib.h>

struct member
{
    int rollno;
    char name[80];
    int age;
  //  int maxAge;
  //  int minAge;
};

void Accept(struct member list[], int s);
void display(struct member list[], int s);
void sortByAge(struct member list[], int s);
void getMaxMin(struct member list[], int s);


int main()
{
    struct member data[20];
    int n;
 //   int maxAge=0;
//    int minAge=0;
 //   char *young=0;
//    char *old=0;
    
    printf("How many family members do you have? : ");
    scanf("%d", &n);
    
    Accept(data, n);
    printf("\nBefore sorting\n");
    display(data, n);
    sortByAge(data, n);
    printf("\nAfter sorting\n");
    display(data, n);
    printf("\n");
    getMaxMin(data,n);
    
    return 0;
}

void Accept(struct member list[80], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        list[i].rollno=i+1;
        printf("Enter data for Member #%d\n", list[i].rollno);
        
   
        
        printf("Enter name : ");
        scanf("%s",list[i].name);
        
        printf("Enter age : ");
        scanf("%d", &list[i].age);
       
        printf("\n");
    }
}

void display(struct member list[80], int s)
{
    int i;
    
  
    for (i = 0; i < s; i++)
    {
        printf("%d %s %d\n",list[i].rollno, list[i].name, list[i].age);
    }
}

void sortByAge(struct member list[80], int s)
{
    int i, j;
    struct member temp;
    
    for (i = 0; i < s-1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
            if (list[j].age < list[j + 1].age)
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

void getMaxMin(struct member list[80],int s)
{
   
    int minAge=list[0].age;
    int maxAge=list[0].age;
    int maxIndex=0;
    int minIndex=0;
    char *old=(char*)malloc(sizeof(char));
    char *young=(char*)malloc(sizeof(char));

    
    for(int i=1;i<s;i++)
    {
        if(list[i].age>maxAge)
        {
            maxIndex=i;
            maxAge=list[i].age;
            old=list[i].name;
        }
    }
    printf("MaxAge: %d %s\n", maxAge, old);
    for(int i=1;i<s;i++)
    {
        if(list[i].age<minAge)
        {
            minIndex=i;
            minAge=list[i].age;
            young=list[i].name;
        }
    }
    printf("MinAge: %d %s\n", minAge, young);
    
    
}
