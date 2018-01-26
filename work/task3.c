int isPalindrome(char * str)	//функция, проверяющая str (ответ либо 0, либо 1)
{
	int len = strlen(str);
	str[len - 1] = '\0';	//Заменяем '\n' на '\0'
	char *levP;	//Указатель на первый элемент строки
	char *praP;	//Указатель на последний элемент строки

	for(levP = &str[0], praP = &str[len - 2]; (levP != praP) && (levP != praP - 1); levP++, praP--)
	{
		if (*levP != *levP)
		{
			return 0;
		}
	}
	return 1;
}