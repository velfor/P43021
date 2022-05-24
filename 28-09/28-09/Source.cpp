/*
Пупкин Василий П43021

Begin16. Найти расстояние между двумя точками с заданными 
координатами x1 и x2 на числовой оси: |x2 − x1|.
*/
#include <iostream>
using namespace std;
int main()
{
	int x1, x2, d;
	cin >> x1 >> x2;
	d = abs(x2 - x1);
	cout << d << endl;
	return 0;
}