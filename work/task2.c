#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "task2.h"

char * reverseWords(char *in, char *out)
{
	char *pstr[SIZE2] = { NULL };
	int n = 0;
	int count = 0;
	int k = 0;
	if (!isspace(in[count]))
	{
		pstr[k++] = &in[count++];
		n++;
	}


	while (in[count] != '\0')
	{
		if (!isspace(in[count]) && isspace(in[count - 1]))
		{
			pstr[k] = &in[count];
			//printf("%c  ", *pstr[k]);
			k++;
			n++;
		}
		count++;
	}
	//printf("\n");

	int j = 0;
	int sm;  //смещение по строке in
	char s;
	for (int i = n - 1; i >= 0; i--)
	{
		sm = 0;

		for (; !isspace(*(pstr[i] + sm)) && *(pstr[i] + sm) != '\0'; sm++, j++)
		{
			//printf("%d ", sm);
			s = *(pstr[i] + sm);
			//printf("%c ", s);
			out[j] = s;
		}
		//printf("%d ", sm);
		//puts(out);
		if (i > 0)
			out[j++] = ' ';


	}
	//printf("\n");

	out[j++] = '\0';
	return out;
}