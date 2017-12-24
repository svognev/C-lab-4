#include <string.h>
#include <stdlib.h>  //для qsort & strcmp
#include "task4.h"

#define S 80

void printLinesToFile(const char *str[], int size, FILE *fp)
{
	for (int i = 0; i < size; i++)
	{
		fputs(str[i], fp);
		if (str[i][strlen(str[i]) - 1] != '\n')
			fprintf(fp, "\n");
	}
	//fclose(fp);
}
