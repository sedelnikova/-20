// ivan20.2.cpp :Дана непустая строка S. Вывести строку, содержащую символы строки S, между которыми вставлено по одному пробелу

#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	char C;
	char s[100];
	int i;

	cout << " ";
	gets_s(s);

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i + 1] != ' ')
		{
			cout << s[i] << " ";
		}
		else
		{
			cout << s[i];
		}
	}
	return 0;
}


