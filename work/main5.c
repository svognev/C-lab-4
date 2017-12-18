#define _CRT_SECURE_NO_WARNINGS
#define N 25
#define M 25
#include <stdio.h>


int main()
{
	char famMembers[N][M] = { 0 };
	int currAge = 0;
	int maxAge = 0;
	int minAge = 0;
	int famMembersNum = 0;
	char *young = 0;
	char *old = 0;

	printf("How many family numbers are there in your family?\n");
	scanf("%d", &famMembersNum);
	int i = 0;
	while (famMembersNum)
	{
		printf("Enter family member's name:\n");
		scanf("%s", famMembers[i]);
		printf("Enter family member's age:\n");
		scanf("%d", &currAge);
		if (currAge > maxAge)
		{
			maxAge = currAge;
			old = famMembers[i];
		}
		if (minAge == 0 && minAge < maxAge)
		{
			minAge = currAge;
			young = famMembers[i];
		}
		else if (currAge < minAge)
		{
			minAge = currAge;
			young = famMembers[i];
		}
		i++;
		famMembersNum--;
	}
	
	printf("%s is the oldest\n", old);
	printf("%s is the youngest\n", young);

	return 0;
}
