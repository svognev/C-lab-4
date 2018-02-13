#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char * str)	//функция, проверяющая str (ответ либо 0, либо 1)
{
	int len = strlen(str);
	/*if(str[len - 1] == '\n')
	{
		str[len - 1] = '\0';	//Заменяем '\n' на '\0'
	}*/
	len = strlen(str);
	char *levP;	//Указатель на первый элемент строки
	char *praP;	//Указатель на последний элемент строки
	levP = &(str[0]);
	praP = &(str[len - 1]);
	while ((levP != praP) && (levP != (praP - 1)))
	{
		//Переводим все буквы в нижний регистр
		/*for (int i = 0; i <= len; i++)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
		*/

		//Пропускаем пробелы и другие знаки препинания
		if ((*levP) == ' ' || (*levP) == ',' || (*levP) == '.' || (*levP) == '\'' || (*levP) == '?' || (*levP) == '!' || (*levP) == '\n' || (*levP) == '-' || (*levP) == '\"')
		{
			levP++;
			continue;
		}
		//Пропускаем пробелы
		if ((*praP) == ' ' || (*praP) == ',' || (*praP) == '.' || (*praP) == '\'' || (*praP) == '?' || (*praP) == '!' || (*praP) == '\n' || (*praP) == '-' || (*praP) == '\"')
		{
			praP--;
			continue;
		}
		//printf("*levP = %c, *praP = %c\n", *levP, *praP);
		//Проверяем символы на равенство друг другу, если не равны возращаем 0
		if ((*levP == (*praP + 32)) || (*praP == (*levP + 32)) || (*levP == *praP))
		{
			levP++;
			praP--;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}