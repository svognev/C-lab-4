#include <stdio.h>
#include <string.h>

/*http://vscode.ru/prog-lessons/sortirovka-metodom-vyibora-na-yazyike-si.html*/
//Сортировка 
void lineSort(char *str[], int size)
{
	for (int i = 0; i < size; i++)
	{
		char *tmp;
		int minPosition = i;
		for (int j = i + 1; j < size; j++)
		{
			if (strlen(str[minPosition]) > strlen(str[j]))
			{
				minPosition = j;
			}
		}
		tmp = str[minPosition];
		str[minPosition] = str[i];
		str[i] = tmp;
	}
}

void printLines(const char *str[], int size)	//функция, печатающая строки в порядке массива str
{
	for (int i = 0; i < size; i++)
	{
		printf("%s\n", str[i]);
	}
}