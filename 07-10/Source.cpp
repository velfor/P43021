#include <iostream>
using namespace std;
int main() {
	/*
	Boolean20. Дано трехзначное число. 
	Проверить истинность высказывания:
	«Все цифры данного числа различны».

	*/
	int a, c1, c2, c3;
	bool res;
	cin >> a;
	c3 = a % 10; // 123 % 10 = 3
	c2 = (a / 10) % 10; // 123 / 10 = 12 % 10 = 2
	c1 = a / 100; // 123 / 100 = 1
	res = (c1 != c2) && (c2 != c3) && (c3 != c1);
	cout << boolalpha << res;
	return 0;
}