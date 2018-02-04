#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 20
#define M 20

int main()
{
	char arr[N][M];
	int count = 0, age = 0;
	int max = 0, min = 100;
	char *young = 0, *old = 0;
	int i = 0;
	
	printf("How many people are in your family?\n");
	while (!scanf("%d", &count))
	{
		printf("How many people are in your family?\n");
	}
	
	for(i;i<count;i++)
	{
		printf("Enter the name of relative - %d:\n",i+1);
		scanf("%s", arr[i]);
		printf("Enter the age of relative - %d:\n", i+1);
		scanf("%d", &age);

		if (age > max)
		{
			max = age;
			old = arr[i];
		}
		if (age <= min)
		{
			min = age;
			young = arr[i];
		}
	}
	
	printf("%s is the oldest - %d\n", old, max);
	printf("%s is the youngest - %d\n", young, min);
	
		return 0;
	}
