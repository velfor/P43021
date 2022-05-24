#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//Array51.Даны массивы A и B одинакового размера N.
	//Поменять местами их содержимое и вывести вначале 
	//элементы преобразованного массива A, а затем — 
	//элементы преобразованного массива B.

	/*const int n = 10;
	int a[n], b[n];
	//заполнение массива a, диапазон от -50 до 50
	for (int i = 0; i < n; i++) a[i] = rand() % 101-50;
	//вывод массива а
	for (int i = 0; i < n; i++) cout << a[i] << ' ';
	cout << endl;
	//заполнение массива b, диапазон от -50 до 0
	for (int i = 0; i < n; i++) b[i] = rand() % 51-50;
	//вывод массива b
	for (int i = 0; i < n; i++) cout << b[i] << ' ';
	cout << endl;

	int temp;
	//обмен местами элементов массива
	for (int i = 0; i < n; i++) {
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	//вывод массива а
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	//вывод массива b
	for (int i = 0; i < n; i++) {
		cout << b[i] << ' ';
	}
	cout << endl;*/
	/*
	Array52. Дан массив A размера N. Сформировать новый 
	массив B того же размера, элементы которого 
	определяются следующим образом:
		B[K] = 2·A[K], если A[K] < 5,
		A[K]/2 в противном случае.
	*/
	/*const int n = 10;
	double a[n], b[n];
	//заполнение массива a, диапазон от -50 до 50
	for (int i = 0; i < n; i++) a[i] = rand() % 101 - 50;
	//вывод массива а
	for (int i = 0; i < n; i++) cout << a[i] << ' ';
	cout << endl;
	//формирование массива b
	for (int i = 0; i < n; i++) {
		if (a[i] < 5) {
			b[i] = 2 * a[i];
		}
		else {
			b[i] = a[i] / 2;
		}
	}
	//вывод массива b
	for (int i = 0; i < n; i++) cout << b[i] << ' ';
	cout << endl;*/
	/*
	Array53. Даны два массива A и B одинакового размера N. 
	Сформировать новый массив C того же размера, каждый 
	элемент которого равен максимальному из элементов 
	массивов A и B с тем же индексом.
	*/
	/*const int n = 10;
	int a[n], b[n], c[n];
	//заполнение массива a, диапазон от -50 до 50
	for (int i = 0; i < n; i++) a[i] = rand() % 101 - 50;
	//вывод массива а
	for (int i = 0; i < n; i++) cout << a[i] << ' ';
	cout << endl;
	//заполнение массива b, диапазон от -50 до 50
	for (int i = 0; i < n; i++) b[i] = rand() % 101 - 50;
	//вывод массива b
	for (int i = 0; i < n; i++) cout << b[i] << ' ';
	cout << endl;
	//формируем массив с
	for (int i = 0; i < n; i++) {
		if (a[i] > b[i]) {
			c[i] = a[i];
		}
		else if (b[i] > a[i]) {
			c[i] = b[i];
		}
		else if (a[i] == b[i]) {
			c[i] = 0;
		}
	}
	//вывод массива с
	for (int i = 0; i < n; i++) cout << c[i] << ' ';
	cout << endl;*/

}