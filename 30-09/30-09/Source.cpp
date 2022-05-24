// Никифоров Павел П43021, преподаватель

#include <iostream>
using namespace std;
int main() {
// Begin25. Найти значение функции y = 3x^6 − 6x^2 − 7 
//при данном значении x.
	/*double x, y, x2;
	cin >> x;
	x2 = x * x;
	y = 3 * x2 * x2 * x2 - 6 * x2 - 7;
	cout << y << endl;*/
	//Begin26. Найти значение функции y = 4(x−3)^6 − 7(x−3)^3 + 2
	//при данном значении x.
	/*double x, y, x_minus_3_kub;
	cin >> x;
	x_minus_3_kub = (x - 3) * (x - 3) * (x - 3);
	y = 4 * x_minus_3_kub * x_minus_3_kub - 7 * x_minus_3_kub + 2;
	cout << "y = " << y << endl;*/
	//Begin27. Дано число A. Вычислить A^8, используя вспомогательную 
	//переменную и три операции умножения.Для этого последовательно 
	//находить A^2, A^4, A^8. Вывести все найденные степени числа A.
	int A, A2, A4, A8;
	cin >> A;
	A2 = A * A;
	A4 = A2 * A2;
	A8 = A4 * A4;
	cout << "A^2 = " << A2 << endl;
	cout << "A^4 = " << A4 << endl;
	cout << "A^8 = " << A8 << endl;
	return 0;
}