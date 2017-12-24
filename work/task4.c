#include "task4.h"

int countLines(char buf[], int size, FILE *fp)
{
	int count = 0;
	while (fgets(buf, size, fp) != NULL)
		count++;
	rewind(fp);
	return count;
}

void printLinesToFile(const char *str[], int size, FILE *fp)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		fprintf(fp, "%s", str[i]);
		if (str[i][strlen(str[i]) - 1] != '\n')
			fprintf(fp, "\n");
	}
}