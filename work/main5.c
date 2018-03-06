#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

#define SIZE 80

int main()
{
	char ** family;
	char * young, * old;
	char input[SIZE];
	unsigned int age;
	unsigned int agemin = ~0, agemax = 0;
	int relnum, i;

	printf("Enter the number of relatives: ");
	fgets(input, SIZE, stdin);
	relnum = atoi(input);
	family = (char **)malloc(sizeof(char *) * relnum);

	for (i = 0; i < relnum; i++)
		family[i] = (char *)malloc(sizeof(char) * SIZE);
	puts(" ");
	
	for (i = 0; i < relnum; i++)
	{
		printf("Enter the name of the relative: ");
		fgets(&family[i][0], SIZE, stdin);
		printf("Enter the age of the relative: ");
		fgets(input, SIZE, stdin);
		age = atoi(input);

		if (age > agemax)
		{
			agemax = age;
			old = *(family + i);
		}
		if (age < agemin)
		{
			agemin = age;
			young = *(family + i);
		}
		puts(" ");
	}
	printf("The oldest: %s", old);
	printf("The youngest: %s\n", young);

	return 0;
}
