// ivan20.3.cpp : Дана строка. Подсчитать количество содержащихся в ней прописных латинских букв.

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Russian");
	
	int i, k;
	
	k = 0;

	char s[100];

	cout << "Введите, пожалуйста, строку... " << endl;

	gets_s(s);

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			k++;
		}
	}

	cout << "Колличество прописных латинских букв = " << k;;

	return 0;
}
