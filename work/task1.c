#include <stdio.h>
#include <string.h>
#include <stdlib.h>  //для qsort & strcmp
#include "task1.h"

#define S 80

/*
*	Функция сортировки строк из библиотеки stdlib.h - qsort:
*
*	qsort(<указатель на первый элемент сортируемого массива>,
*	<количество элементов в сортируемом массиве>,
*	sizeof(<тип элемента>),  //размер одного элемента массива в байтах
*	<функция, которая сравнивает два элемента>);
*
*	Функция должна иметь следующий прототип:
*	int compare(const void * val1, const void * val2 );
*/

int compare(const void *a, const void *b)
{
	if (strlen(*(char**)a) > strlen(*(char**)b))
		return 1;
	else
		return -1;
}

void lineSort(char *str[], int size)
{

	//char *sort[S];
	qsort(str, size, sizeof(char**), compare);
}

void printLines(const char *str[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s", str[i]);
		if (str[i][strlen(str[i]) - 1] != '\n')
			putchar('\n');
	}
}


/*
*	Если нужно вывести строки по алфавиту.
*	В качестве функции для сравнения строк берём
*	функцию сравнения строк из библиотеки stdlib.h - strcmp:
*
*	strcmp (<строка 1>, <строка 2>);
*
*	Эта функция выдаёт:
*	- значение меньше нуля, если <строка 1>  меньше, чем <строка 2>
*	- 0, если <строка 1>  и <строка 2> равны
*	- значение больше нуля, если <строка 1>  больше, чем <строка 2>
*
*/