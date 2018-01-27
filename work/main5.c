#include <stdio.h>

#define N 100
#define M 100

int main()
{
	char names[N][M] = { 0 };
	int age = 0;
	int minAge = 110;
	int maxAge = 0;
	char *young = NULL;
	char *old = NULL;
	int amount = 0;
	int i = 0;

	printf("Enter amount of your relatives?\n");
	if (!scanf("%d", &amount))
	{
		puts("Wrong input!\n");
		return 1;
	}
	
	for (i = 0; i < amount; i++)
	{
		printf("Enter the name of %d the relative:\n", i + 1);
		if (!scanf("%s", &names[i]))
		{
			puts("Wrong input!\n");
			return 1;
		}

		printf("Enter age of %d relative:\n", i + 1);
		if (!scanf("%d", &age))
		{
			puts("Wrong input!\n");
			return 1;
		}

		if (age > maxAge)
		{
			maxAge = age;
			old = names[i];
		}

		if (age < minAge)
		{
			minAge = age;
			young = names[i];
		}
	}
	printf("The youngest relative is %s.\n", young);
	printf("The oldest relative is %s.\n", old);
	
	return 0;
}