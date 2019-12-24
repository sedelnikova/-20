// ivan20.4.cpp : Дан символ C и строка S. Удвоить каждое вхождение символа C в строку S

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Russian");

	int k, i;

	k = 0;
	string s;
	char c;

	cout << "Введите, пожалуйста, символ С...";
	cin >> c;

	cout << "Введите, пожалуйста, строку...";

	cin.ignore();

	getline(cin, s);

	for (i = s.length; i > -1; i--)
	{
		if (s[i] == c)
		{
			s.insert(i, 1, c);
		}
	}

	cout << s;
	return 0;

}

