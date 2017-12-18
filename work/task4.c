#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task4.h"
#include <time.h>
#define N 100

void printLinesToFile(const char *str[], int size, FILE *fp){
	for (int i = 0; i < size; i++)
		fprintf(fp, "%s\n", str[i]);
}
