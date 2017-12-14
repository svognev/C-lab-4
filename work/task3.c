#include <string.h>

int isPalindrome(char * str)
{
	int size = strlen(str);
	char* begin = str;
	char* final = str + size - 2;
	while (begin <= final)
	{
		if (*begin != *final)
			return 0;
		begin++;
		final--;
	}
	return 1;
}