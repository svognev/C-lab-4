#include<stdio.h>
compare(const void *a, const void *b)
{
	if (strlen(*(char **)a) <strlen(*(char **)b))//base function for quick sort
		return 1;
	else
		return-1;
}

void lineSort(char *str[], int size)
{
		qsort(str, size, sizeof(str), compare);//the base function for quick sort
		
}
void printLinesToFile(const char *str[], int size, FILE *fp)
{
	int i = 0,j=0;
	while (i<size)
	{
		j=fputs(str[i], fp);
		i++;
	}
	
	printf("%s\n", "The file has been successfuly changed and saved");

}