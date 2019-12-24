// ivan20.1.cpp : Дан символ C. Вывести два символа, первый из которых предшествует символу C в кодовой таблице, а второй следует за символом C.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	char C;

	cout << "Введите, пожалуйста, символ С - ";

	cin >> C;

	cout << "Предыдущий символ " << char(int(C) - 1) << endl << "Следующий символ " << char(int(C) + 1);

	return 0;
}
