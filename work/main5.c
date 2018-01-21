#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 30
#define M 80

int main()
{
	unsigned int i;
	unsigned int number = 0;
	char family[N][M];
	unsigned int age = 0, maxAge = 0, minAge = 1000;
	char* young;
	char* old;

	printf("Enter the number of relatives:\n");
	scanf("%d", &number);
	printf("In turn, enter the name and age of your relatives:\n");
	for (i = 0; i < number; i++)
	{
		printf("enter the name of %d relative: ", i + 1);
		scanf("%s", &family[i][0]);
		printf("enter the age of %d relative: ", i + 1);
		scanf("%d", &age);
		if (age > maxAge)
		{
			maxAge = age;
			old = &family[i][0];
		}
		if (age < minAge)
		{
			minAge = age;
			young = &family[i][0];
		}
	}
	printf("Your oldest relative: %s\n", old);
	printf("Your youngest relative: %s\n", young);

	return 0;
}