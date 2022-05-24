#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	/*
	Case10. Робот может перемещаться в четырех направлениях 
	(«С» — север,«З» — запад, «Ю» — юг, «В» — восток) и принимать три 
	цифровые команды: 0 — продолжать движение, 1 — поворот налево, 
	−1 — поворот направо. Дан символ C — исходное направление робота и 
	целое число N — посланная ему команда. Вывести направление робота 
	после выполнения полученной команды.
	*/
	char c;
	int n;
	cin >> c;
	cin >> n;
	switch (c) {
	case 'с':
		switch (n)
		{
		case 0: cout << 'с' << endl; break;
		case -1: cout << 'в' << endl; break;
		case 1: cout << 'з' << endl; break;
		}
		break;
	}
	return 0;
}