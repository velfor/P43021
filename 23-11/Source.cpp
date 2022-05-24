#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main() {
	/*
	const int n = 5;
	const int m = 5;
	double arr[n][m];
	srand(time(0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = round((rand() % 1000 / 150.0)*100)/100;
		}
	}
	//вывод матрицы на экран в виде таблицы
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
	//ищем сумму
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i][i];
	}
	cout << " sum = " << sum << endl;
	*/
	
	// Заполнить матрицу целыми числами от -40 до 40. 
	//Вывести иптрицу на экран
	// Подсчитать кол-во положительных элементов на главной диагонали
	/*
	const int n = 5;
	const int m = 5;
	double arr[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = round((rand() % 1000 / 200.0) * 10) / 10 -2.5;
			// arr[i][j] = rand()%81-40;
		}
	}
	//вывод матрицы на экран в виде таблицы
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
	//поиск в главной диагонали
	int qty = 0;
	for (int k = 0; k < n; k++) {
		if (arr[k][k] > 0) {
			qty++;
		}
	}
	//выводим результат
	cout << qty;
	*/
	/*
	const int n = 5;
	const int m = 5;
	int arr[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//arr[i][j] = round(rand() % 1000 / 200.0 * 10) / 10 - 2.5;
			arr[i][j] = rand()%81-40;
		}
	}
	//вывод матрицы на экран в виде таблицы
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
	//поиск в главной диагонали
	int qty = 0;
	for (int k = 0; k < n; k++) {
		if (arr[k][k] % 2 == 0) {
			qty++;
		}
	}
	//выводим результат
	cout << qty;
	*/

	// Матрицу целых чисел заполнить числами от 10 до 99
	// Найти кол-во элементов главной диагонали,
	// делящихся на 6 с остатком 1
	/*
	const int n = 5;
	const int m = 5;
	int arr[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 90 + 10;
		}
	}
	//вывод матрицы на экран в виде таблицы
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
	//поиск в главной диагонали
	int qty = 0;
	for (int k = 0; k < n; k++) {
		if (arr[k][k] % 6 == 1) {
			qty++;
		}
	}
	//выводим результат
	cout << qty;
	*/
	// Матрицу целых чисел заполнить числами от -20 до 30
	// Найти произведение элементов главной диагонали,
	// делящихся на 7 с отатками 2, 4, 5
	//if (arr[i][i]%7 == 2 || arr[i][i]%7 == 4 || arr[i][i]%7 == 5)
	
	//Матрицу символов заполнить символами 'x' или 'o'
	/*
	const int n = 3;
	char field[n][n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int t = rand() % 2;
			if (t == 0) field[i][j] = 'x';
			else field[i][j] = 'o';
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(2) << field[i][j];
		}
		cout << endl;
	}
	*/
	//проверка что выиграли крестики
	//проверка строк
	//в 0-й строке все крестики
	/*if (field[0][0] == 'x' && field[0][1] == 'x' && field[0][2] == 'x') {
		cout << "x win" << endl;
	}
	//в 1-й строке все крестики
	if (field[1][0] == 'x' && field[1][1] == 'x' && field[1][2] == 'x') {
		cout << "x win" << endl;
	}
	//во 2-й строке все крестики
	if (field[2][0] == 'x' && field[2][1] == 'x' && field[2][2] == 'x') {
		cout << "x win" << endl;
	}
	//проверка столбцов
	//в 0-м  столбце все крестики
	if (field[0][0] == 'x' && field[1][0] == 'x' && field[2][0] == 'x') {
		cout << "x win" << endl;
	}
	//в 1-м  столбце все крестики
	if (field[0][1] == 'x' && field[1][1] == 'x' && field[2][1] == 'x') {
		cout << "x win" << endl;
	}
	//во 2-м столбце все крестики
	if (field[0][2] == 'x' && field[1][2] == 'x' && field[2][2] == 'x') {
		cout << "x win" << endl;
	}
	//проверка диагоналей
	//в главной диагонали все крестики
	if (field[0][0] == 'x' && field[1][1] == 'x' && field[2][2] == 'x') {
		cout << "x win" << endl;
	}
	//в побочной диагонали все крестики
	if (field[0][2] == 'x' && field[1][1] == 'x' && field[2][0] == 'x') {
		cout << "x win" << endl;
	}*/
	
	// Заполнить матрицу числами от 0 до 100
	//Найти максимальный элемент на побочной диагонали
	return 0;
}