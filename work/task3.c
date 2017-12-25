#include <string.h>

int isPalindrome(char * str)
{
	int size = strlen(str);
	char* begin = str;
	char* final;
	if (str[size - 1] == '\n')
		final = str + size - 2;
	else
		final = str + size - 1;
	while (begin != final)
	{
		if (*begin != *final)
			return 0;
		begin++;
		final--;
	}
	return 1;
}