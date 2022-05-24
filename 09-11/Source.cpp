#include <iostream>
#include <ctime>
using namespace std;
int main() {
	/*setlocale(LC_ALL, "rus"); 
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++) arr[i] = rand() % 100;
	for (int i = 0; i < n; i++) cout << arr[i] << ' ';
	cout << endl;
	int k, l;
	cin >> k >> l;
	int sum = 0;
	int kol = 0;
	for (int i = k; i <= l; i++) { 
		sum += arr[i];// sum = sum + arr[i];
		kol++;
	}
	cout << (double) sum / kol << endl;*/
	//Поиск минимального элемента
	/*const int n = 10;
	int arr[n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 101 - 50;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;

	int min = arr[0];
	int pos_min = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
			pos_min = i;
		}
	}
	cout << min << ' ' << pos_min << endl;*/
	//Поиск максимального элемента
	/*const int n = 10;
	int arr[n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 101 - 50;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;

	int max = arr[0];
	int pos_max = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			pos_max = i;
		}
	}
	cout << max << ' ' << pos_max << endl;*/
	//Array28. Дан массив A размера N. Найти минимальный элемент из его 
	//элементов с четными номерами: A0, A2, A4, A6, . . . .
	/*const int n = 10;
	int arr[n];
	srand(time(0));
	//заполнение массива случанйми числами
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 101 - 50;
	}
	//вывод массива на экран в строку
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	int min = arr[0];
	for (int i = 2; i < n; i += 2) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << min << endl;*/
	//Array29. Дан массив A размера N. Найти максимальный элемент из его
	//элементов с нечетными номерами: A1, A3, A5, . . . .
	/*const int n = 10;
	int arr[n];
	srand(time(0));
	//заполнение массива случайными числами
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 101 - 50;
	}
	//вывод массива на экран в строку
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	int max = arr[1];
	for (int i = 3; i < n; i += 2) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << max << endl;*/
	// Заполнить массив случайными числами. Подсчитать кол-во четных
	// элементов массива
	/*const int n = 10;
	int arr[n];
	srand(time(0));
	//заполнение массива случайными числами
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 101 - 50;
	}
	//вывод массива на экран в строку
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	int kol = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			kol++;
		}
	}
	cout << kol << endl;*/
	// Заполнить массив случайными числами. Подсчитать сумму 
	// нечетных элементов массива
	/*const int n = 10;
	int arr[n];
	srand(time(0));
	//заполнение массива случайными числами
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 101 - 50;
	}
	//вывод массива на экран в строку
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) {
			cout << arr[i] << ' ';
			sum = sum + arr[i];
		}
	}
	cout << sum << endl;*/

	return 0;
}