int isPalindrome(char * str)	//функция, проверяющая str (ответ либо 0, либо 1)
{
	int len = strlen(str);
	str[len - 1] = '\0';	//Заменяем '\n' на '\0'
	len--;
	char *levP;	//Указатель на первый элемент строки
	char *praP;	//Указатель на последний элемент строки
	levP = &(str[0]);
	praP = &(str[len - 1]);
	for(; (levP != praP) && (levP != (praP - 1)); levP++, praP--)
	{
		printf("*levP = %c, *praP = %c\n", *levP, *praP);
		if (*levP != *praP)
		{
			return 0;
		}
	}
	return 1;
}