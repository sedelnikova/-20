// ivan20.5.cpp : Даны строки S и S0. Найти количество вхождений строки S0 в строку S.

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
	string s, s0;

	cout << "Введите, пожалуйста, строку S...";
	getline(cin, s);
	cout << endl;

	cout << "Введите, пожалуйста, строку S0...";
	getline(cin, s0);
	cout << endl;

	while (s.find(s0) >= 0 && s.find(s0) < s.length() + 1)
	{
		s.erase(s.find(s0), s0.length());
		k++;
	}

	cout << k;

	return 0;
}


	