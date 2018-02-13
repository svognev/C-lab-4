#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "task4.h"
#include "task1.h"
#define SIZEM 128
#define LSTR 512

int main(int argc, char * argv[])	
{
	char fin[256] = { 0 };
	char fout[256] = { 0 };
	
	switch (argc)
	{
	case 2:
	{
		strcpy(fin, argv[1]);
		strcpy(fout, argv[1]);
		break;
	}
	case 3:
	{
		strcpy(fin, argv[1]);
		strcpy(fout, argv[2]);
		break;
	}
	default:
	{
		strcpy(fin, "test.txt");
		strcpy(fout, "test.txt");
		break;

	}
	}

	FILE *fpi;	
	char *str[SIZEM];	//������ ���������� �� ������	
	fpi = fopen(fin, "r");
	if (fpi == NULL) //�������� ������� ����� � ��� ��������
	{ 
		printf("error open file in\n"); 
		return -1; 
	}
	int i;	//������� ����������� �����
	for(i = 0; i < SIZEM; i++)
	{
		char *stroka;	//��������� �� ������
		stroka = (char*)malloc(LSTR * sizeof(char));	//�������� ������ ��� ������ � ���������� ����� � ���������		
		str[i] = fgets(stroka, LSTR, fpi);	//������ ����� ������ �� �����
		stroka[strlen(stroka) - 1] = '\0';
		//�������� �� ����� ����� ��� ������ ������
		if (str[i] == NULL)
		{
			// ���������, ��� ������ ���������: �������� ���� ��� ��� ������ ������
			if (feof(fpi) != 0)
			{
				//���� ���� ����������, ������� ��������� � ���������� ������ � ������� �� ������������ �����
				//printf("read end file in\n");
				break;
			}
			else
			{
				//���� ��� ������ ��������� ������, ������� ��������� �� ������ � ������� �� ������������ �����
				printf("err read file in\n");
				break;
			}
		}	
	}
	//��������� ����
	//printf("close file in\n");
	if (fclose(fpi) == EOF)
	{
		printf("error close file in\n");
	}
	lineSort(str, i);

	FILE *fpo;
	fpo = fopen(fout, "w");
	if (fpo == NULL)
	{
		printf("error open file out\n");
		return -1;
	}	
	printLinesToFile(str, i, fpo);

	if (fclose(fpo) == EOF)
	{
		printf("error close file out\n");
	}
	return 0;
}
