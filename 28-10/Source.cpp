//Никифоров Павел
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	//1. Вводить числа, пока не будет введен 0.
	/*int a;
	cin >> a;
	while (a != 0) {
		cout << a << ' ';
		cin >> a;
	}*/
	//2. К задаче один добавить: сколько чисел ввели и их сумму
	/*int a;
	
	int n = 0;
	int sum = 0;
	cin >> a;
	while (a != 0) {
		cout << a << ' ';
		n++;
		sum += a; // sum = sum + a;
		cin >> a;
	}
	cout << endl << "n = " << n <<  " sum = " << sum << endl;*/
	/*While1. Даны положительные числа A и B(A > B).На отрезке 
	длины A размещено максимально возможное количество отрезков 
	длины B(без	наложений).Не используя операции умножения и 
	деления, найти сколько раз b поместится в a*/
	/*найти остаток */
	/*int a, b;
	cin >> a >> b;
	int n = 0;
	int sum = 0;
	while (a >= b) {
		a = a - b;
	}
	cout << a << endl;*/
	/*Series1. Даны десять вещественных чисел.Найти их сумму.*/
	/*double a, sum = 0;
	int i = 0;
	while (i < 9) {
		cin >> a;
		sum += a; // sum = sum + a
		i++;
	}
	cout << sum << endl;*/
	/*Series2.Даны 5 вещественных чисел. Найти их произведение.*/
	/*double a, pr = 1.0;
	int i = 0;
	while (i < 5) {
		cin >> a;
		pr *= a;
		i++;
	}
	cout << pr << endl;*/
	/*Series3. Даны 5 вещественных чисел.Найти их среднее арифметическое.*/
	/*double a, sum = 0;
	int i = 0;
	while (i < 5) {
		cin >> a;
		sum += a; // sum = sum + a
		i++;
	}
	cout << sum / i << endl;*/
	double a;
	cin >> a;
	cout << round(a);
	//cout << round(a) << endl;
	return 0;
}