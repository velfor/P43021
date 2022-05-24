// Ввести 2 одномерных массива целых чисел разного размера. Отсортировать их по 
// возрастанию. Переписать элементы этих двух массивов в третий массив так, чтобы он 
// был отсортирован по возрастанию.
#include <iostream>
#include <ctime>
using namespace std;
void fillRandom(int* fa, const int fn) {
	for (int i = 0; i < fn; i++) {
		fa[i] = rand() % 11;
	}
}
void bubleSort(int* fa, const int fn) {
	for (int i = 0; i < fn; i++) {
		for (int j = 0; j < fn - 1 - i; j++) {
			if (fa[j] > fa[j + 1]) {
				swap(fa[j], fa[j + 1]);
			}
		}
	}
}
void printArray(int* fa, const int fn) {
	for (int i = 0; i < fn; i++) {
		cout << fa[i] << ' ';
	}
	cout << endl;
}
int powerA3(int fa) {
	return fa * fa * fa;
}
double amean(int fa, int fb) {
	return (fa + fb) / 2.0;
}
double gmean(int fa, int fb) {
	return sqrt(fa * fb);
}
// периметр равностороннего треугольника
double  triangle_P(double a) {
	return 3 * a;
}
//площадь равностороннего треугольника
double triangle_S(double a) {
	return a * a * sqrt(3) / 4;
}
double Rect_P(double x1,double y1, double x2, double y2) {
	double a = abs(x2 - x1);
	double b = abs(y2 - y1);
	return 2 * (a + b);
}
double Rect_S(double x1, double y1, double x2, double y2) {
	double a = abs(x2 - x1);
	double b = abs(y2 - y1);
	return a * b;
}
int digit_sum(int k) {
	int sum = 0;
	while (k != 0) {
		int c = k % 10;
		sum += c;
		k = k / 10;
	}
	return sum;
}
int add_right_digit(int d, int k) {
	return k * 10 + d;
}
void swap(int &x, int &y) {
	int c = x;
	x = y;
	y = c;
}
int sign(int x) {
	if (x < 0) return -1;
	if (x == 0) return 0;
	if (x > 0) return 1;
}
//====================MAIN====================
int main() {
	/*
	const int n = 5;
	const int n1 = 10;
	int a[n], b[n1], c[n + n1];
	//заполнение массива a
	fillRandom(a,n);
	//заполнение массива b
	fillRandom(b, n1);
	//сортировка массива а
	bubleSort(a, n);
	//сортировка массива b
	bubleSort(b, n1);
	//печать массива а
	printArray(a, n);
	//печать массива b
	printArray(b, n1);
	//переписываем а в с
	for (int i = 0; i < n; i++) {
		c[i] = a[i];
	}
	//переписываем b в с
	for (int i = 0; i < n1; i++) {
		c[i + n] = b[i];
	}
	//сортировка массива с
	bubleSort(c, n + n1);
	//печать массива c
	printArray(c, n + n1);
	*/
	//Proc1. Описать функцию PowerA3(A), вычисляющую третью степень числа A и 
	//возвращающую ее. С помощью этой
	//процедуры найти третьи степени пяти разных чисел.
	/*int a123;
	cin >> a123;
	cout << powerA3(a123) << endl;*/
	//Proc3.Описать 2 функции amean(X, Y) и gmean(X, Y), вычисляющую
	//	среднее арифметическое (X + Y) / 2 и среднее геометрическое
	//	√X·Y двух положительных чисел X и Y
	/*int x, y;
	cin >> x >> y;
	cout << amean(x, y) << ' ' << gmean(x, y) << endl;*/
	//Proc4◦. Описать 2 функции triangle_P(a) и triangle_S(a), вычисляющую по стороне a
	//	равностороннего треугольника его периметр P = 3·a и площадь S = a^2*(√3 )/4
	// С помощью этой процедуры найти периметры и площади трех равносторонних треугольников с данными сторонами.
	/*double a;
	for (int i = 0; i < 3; i++) {
		cin >> a;
		cout << "perimetr " << triangle_P(a) << endl;
		cout << "ploschad " << triangle_S(a) << endl;
	}*/
	//Proc5.Описать процедуру RectPS(x1, y1, x2, y2, P, S), вычисляющую периметр P
	//	и площадь S прямоугольника со сторонами, параллельными осям координат, по координатам(x1, y1), (x2, y2) 
	//его противоположных вершин 
	//С помощью этой процедуры найти периметры и площади трех прямоугольников с данными противоположными вершинами.
	/*double x1, y1, x2, y2;
	for (int i = 0; i < 3; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cout << "perimetr " << Rect_P(x1,y1,x2,y2) << endl;
		cout << "ploschad " << Rect_S(x1, y1, x2, y2) << endl;
	}*/
	//Proc6. Описать функцию digit_sum(k), находящую сумму цифр целого положительного
	// числа K. 
	// С помощью этой процедуры найти количество и сумму цифр для каждого из пяти 
	//данных целых чисел.
	/*int a;
	for (int i = 0; i < 5; i++) {
		cin >> a;
		cout << "smma cifr " << digit_sum(a) << endl;
	}*/
	//Proc8. Описать процедуру AddRightDigit(D, K), добавляющую к целому положительному 
	//числу K справа цифру D (D — входной параметр целого типа, лежащий в диапазоне 0–9,
	//С помощью этой процедуры последовательно добавить к данному числу K справа данные 
	//цифры D1 и D2, выводя результат каждого добавления.
	/*int d1, d2, k;
	cin >> k >> d1 >> d2;
	k = add_right_digit(d1, k);
	cout << k << endl;
	k = add_right_digit(d2, k);
	cout << k << endl;*/
	//Proc10.Описать процедуру Swap(X, Y), меняющую содержимое переменных X и Y
	//(X и Y — вещественные параметры, являющиеся одновременно
	//	входными и выходными).
	/*int a, b;
	cin >> a >> b;
	swap(a, b);
	cout << a << ' ' << b << endl;*/
	//Proc16.Описать функцию sign(X) целого типа, возвращающую для вещественного числа 
	//X следующие значения : −1, если X < 0; 0, если X = 0; 1, если X > 0.
		//C помощью этой функции найти значение выражения Sign(A) + Sign(B)
		//для данных вещественных чисел A и B.
	/*int x, y;
	cin >> x >> y;
	cout << sign(x) + sign(y) << endl;*/

	return 0;
}
