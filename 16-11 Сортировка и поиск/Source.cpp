//Алгоритмы сортировки и поиска
#include <iostream>
#include <ctime>
using namespace std;
int main() {
	const int n = 12; // константа - размер массива
	int arr[n]; // описание перменной для массива
	int temp;
	//заполнение массива случайными числами
	srand(time(0));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 101-50;
	}
	//вывод массива
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	/*
	//СОРТИРОВКА ПУЗЫРЬКОМ
	//повторяем один проход сортировки n раз
	for (int i = 0; i < n; i++) {
		//один проход сортировки
		for (int j = 0; j < n - 1 -i; j++) {
			//если текущий больше правого соседа
			if (arr[j] > arr[j + 1]) {
				//то поменять их местами
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				//тоже поменять, но встроенной функцией
				//swap(arr[j], arr[j+1])
			}
		}
	}
	//вывод массива
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	*/
	/*
	//ПОИСК МАКСИМАЛЬНОГО ЭЛЕМЕНТА В МАССИВЕ
	int max = arr[0];
	int p = 0;
	for(int i=1; i < n; i++){
		if (arr[i] > max) {
			max = arr[i];
			p = i;
		}
	}
	cout << max << ' ' << p << endl;
	//ПОИСК МИНИМАЛЬНОГО ЭЛЕМЕНТА В МАССИВЕ
	int min = arr[0];
	p = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
			p = i;
		}
	}
	cout << min << ' ' << p << endl;
	*/
	//СОРТИРОВКА ВЫБОРОМ МАКСИМАЛЬНОГО по убыванию
	
	for (int i = 0; i < n; i++) {
		//поиск макcимального в массиве
		int max = arr[i];
		int p = i;
		for (int j = i; j < n; j++) {
			if (arr[j] > max) {
				max = arr[j];
				p = j;
			}
		}
		//обмен местами max и arr[i]
		swap(arr[i], arr[p]);
	}
	//вывод массива
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	return 0;
	

}