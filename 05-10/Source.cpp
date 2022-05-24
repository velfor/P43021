/*
Никифоров Павел, преподаватель
*/
#include <iostream>
using namespace std;
int main() {
	/*
	Boolean1. Дано целое число A. 
	Проверить истинность высказывания: 
	«Число A является положительным».
	*/
	int A; // исходное
	bool res; // результат
	cin >> A;
	res = A > 0;
	//cout << boolalpha;
	cout << res << endl;
	return 0;
}