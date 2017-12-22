#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#define N_5 25
#define M_5 80

void clean_stdin(void)
{
	int c;
	do
		c = getchar();
	while (c != '\n' && c != EOF);
}

int main()
{
	char names[N_5][M_5] = { '\0' };
	char *young = NULL, *old = NULL;
	int currAge = 0, maxAge = INT_MIN, minAge = INT_MAX;
	int numRel = 0, i = 0;

	printf("Enter num of relatives: ");
	scanf("%d", &numRel);
	if (numRel > N_5)
		numRel = N_5;
	putchar('\n');

	while (i < numRel)
	{
		printf("Relative #%d\n", i + 1);
		printf("Enter age: ");
		scanf("%d", &currAge);
		clean_stdin();
		printf("Enter name: ");
		fgets(names[i], M_5, stdin);

		if (currAge > maxAge)
		{
			maxAge = currAge;
			old = &(names[i]);
		}
		if (currAge < minAge)
		{
			minAge = currAge;
			young = &(names[i]);
		}

		putchar('\n');
		i++;
	}

	printf("Old: %s", old);
	if (old[strlen(old) - 1] != '\n')
		putchar('\n');
	printf("Young: %s", young);
	
	return 0;
}