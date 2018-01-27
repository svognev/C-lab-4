#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50
#define M 100

int main()
{
	char names[N][M] = { 0 };
	int age = 0;
	int maxAge = 0;
	int minAge = 150;
	char *young = NULL;
	char *old = NULL;
	int count = 0;
	printf("The number of your relatives: ");
	scanf("%d", &count);
	putchar('\n');

	for (int i = 0; i < count; i++)
	{
		printf("Name of your %d relative: ", i + 1);
		scanf("%s", names[i]);
		do {
			printf("Age of your %d relative: ", i + 1);
			scanf("%d", &age);
		} while (age < 0 || age > 150);
		
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
		putchar('\n');		
	}

	printf("The oldest relative is %s.\n", old);
	printf("The youngest relative is %s.\n", young);

	return 0;
}