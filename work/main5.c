#include <stdio.h>
#define N 20
#define M 30
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char name[N][M] = { 0 };
	int age = 0;
	int maxAge = 0;
	int minAge = 150;
	char* young = 0;
	char* old = 0;
	int count = 0;
	printf("Enter amount of your relatives?\n");
	if (!scanf("%d", &count))
	{
		printf("Invalid input!\n");
		return 1;
	}
	for (int i = 0; i < count; i++)
	{
		printf("Enter name of %d relative:\n",i+1);
		if (!scanf("%s", name[i]))
		{
			printf("Invalid input!\n");
			return 1;
		}
		//fgets(name[i], M, stdin);
		printf("Enter age of %d relative:\n", i + 1);
		if (!scanf("%d", &age))
		{
			printf("Invalid input!\n");
			return 1;
		}
		if (age>maxAge)
		{
			maxAge = age;
			old = name[i];
		}
		if (age < minAge)
		{
			minAge = age;
			young = name[i];
		}
	}

	printf("Most young people is %s\n", young);
	printf("Most old people is %s\n", old);

	return 0;
}