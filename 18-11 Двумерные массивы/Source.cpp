#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main() {
	/*const int n = 10;//кол-во строк
	const int m = 10;//кол-во столбцов
	int arr[n][m];
	srand(time(0));
	//цикл переключает номера строк
	for (int i = 0; i < n; i++) {
		//цикл переключает номера столбцов
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand()%101;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout <<setw(4) << arr[i][j];
		}
		cout << endl;
	}*/
	// Matrix1. Даны целые положительные числа M и N.
	// Сформировать целочисленную матрицу размера NхМ, у которой все 
	// элементы I - й строки имеют значение 10·i (i = 0, . . ., N-1).
	/*const int n = 5;
	const int m = 7;
	int field[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			field[i][j] = 10*i;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(3) << field[i][j];
		}
		cout << endl;
	}*/
	//Matrix2.Даны целые положительные числа M и N.Сформировать целочисленную матрицу размера M × N, у которой все элементы J - го столбца
	//	имеют значение 5·J(J = 1, . . ., N).
	/*const int n = 5;
	const int m = 7;
	int dom[n][m];
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++)	{
			dom[i][j] = 5 * j;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(3) << dom[i][j];
		}
		cout << endl;
	}*/
	/*Matrix17.Дана матрица размера M × N и целое число K(1 ≤ K ≤ M).Найти
		сумму и произведение элементов K - й строки данной матрицы*/
	/*const int n = 3;//кол-во строк
	const int m = 3;//кол-во столбцов
	int arr[n][m];
	srand(time(0));
	//цикл переключает номера строк
	for (int i = 0; i < n; i++) {
		//цикл переключает номера столбцов
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 101;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	int k;
	cin >> k;
	int sum = 0;
	for (int x = 0; x < m; x++) {
		sum += arr[x][k];
	}
	cout << sum << endl;*/
	//Matrix18.Дана матрица размера M × N и целое число K(1 ≤ K ≤ N).Найти
	//	сумму и произведение элементов K - го столбца данной матрицы.

	// Дана матрица размера M × N и целое число K(1 ≤ K ≤ N).
	// Найти сумму четных элементов этой строки
	
	/*const int n = 3;//кол-во строк
	const int m = 3;//кол-во столбцов
	int arr[n][m];
	srand(time(0));
	//цикл переключает номера строк
	for (int i = 0; i < n; i++) {
		//цикл переключает номера столбцов
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 101;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	int k;
	cin >> k;
	int sum = 0;
	for (int x = 0; x < m; x++) {
		if (arr[k][x] % 2 == 0) sum += arr[k][x];
	}
	cout << sum << endl;

	// Дана матрица размера M × N и целое число K(1 ≤ K ≤ N).
	// Найти сумму элементов К-го столбца с нечетными индексами
	*/

	//Индивидульно с Артемом
	/*
	const int n = 3;
	const int m = 5;
	int mas[n][m];
	srand(time(0));
	*/
	/*
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 81-40;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j] << ' ';
		}
		cout << endl;
	}
	*/
	/*
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = 10 * i;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j] << ' ';
		}
		cout << endl;
	}
	*/
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 81 - 40;
		}
	}
	int k;
	cin >> k;
	for (int j = 0; j < m; j++) {
		cout << mas[k][j] << ' ';
	}*/
	
}