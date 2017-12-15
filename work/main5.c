#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
#define N 20
#include<string.h>
int main()
{
	int i = 0, j = 0, number = 0, age = 0, maxAge = 0, minAge = 900, k = 0, z = 0, len = 0,a=0;
	char list[SIZE][N] = {' '};
	char Name[SIZE][N] = { ' ' };
	char *pName[2];
	char *word[SIZE] = { ' ' };
	char ch = ' ';
	printf("Haw many relatives in your family: ");
	fgets(word,SIZE,stdin);//record string in array word
	number = atoi(word);// change the letter to number
	fflush(stdin);

	i = 0;
	while (i<number)// condition is - if less number of family
	{
		printf("\nEnter name %i person of your family and his age: ",i+1);
		fgets(list[i], SIZE, stdin);
		len = strlen(list[i]) - 1;// count number of symbols
			list[i][len] = '\0';
			j = 0;
			z = 0;
		while (j<len)
		{
			ch = list[i][z];
			if ((ch >= '0') && (ch <= '9'))// check symbols and if it's the number then collect age and record its in "age"
			{
				age = age * 10 + (ch - '0');

			} else if (ch!=' ')// check symbols and if its the letter then collect name and record it's in array[][] "Name"
			{
				Name[a][k] = ch;
					k++;
			}
			j++;
			z++;
		}
		Name[a][k] = '\0';
		if (age > maxAge)// check max age
		{
			pName[1] = &Name[a];
			maxAge = age;
		}

		if (age < minAge)// check min age
		{
			pName[0] = &Name[a];
			minAge = age;
		}
		k = 0;
		age = 0;
		i++;
		a++;
		fflush(stdin);// to clear memory for next enter
	}
	printf("\n\nThe oldest in your family is : %s\n", pName[1]);
	printf("The yongest in your family is : %s\n", pName[0]);

	return 0;
}

