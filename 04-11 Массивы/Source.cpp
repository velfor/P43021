#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//const int n = 5;
	//int arr[n];
	/*
	//ввод массива с клавиатуры
	for(int i=0; i < n; i++) cin >> arr[i];
	srand(time(0));
	//заполнение массива случайными числами
	//в данном случае от 0 до 99
	for (int i = 0; i < n; i++) arr[i] = rand()%100;
	//вывод массива в строку
	for (int i = 0; i < n; i++) cout << arr[i] << ' ';
	//cout << endl;*/
	/*
	Array1. Дано целое число N (> 0). Сформировать и вывести 
	целочисленный массив размера N, содержащий N первых положительных 
	нечетных чисел: 1, 3, 5, . . . .
	*/
	/*const int n = 5;
	int arr[n];
	int k = 1;
	for (int i = 0; i < n; i++) {
		arr[i] = k; // arr[i] = 2*i+1;
		k += 2;
	}
	for (int i = 0; i < n; i++) cout << arr[i] << ' ';
	*/
	/*
	Array2. Дано целое число N (> 0). Сформировать и вывести 
	целочисленный массив размера N, содержащий степени двойки от первой 
	до N-й: 2, 4,8, 16, . . . .
	*/
	/*const int n = 5;
	int arr[n];
	int k = 2;
	for (int i = 0; i < n; i++) {
		arr[i] = k; // arr[i] = 2*i+1;
		k *= 2;
	}
	for (int i = 0; i < n; i++) cout << arr[i] << ' ';*/
	/*
	Array3. Дано целое число N (> 1), а также первый член A и разность 
	D арифметической прогрессии. Сформировать и вывести массив размера N,
	содержащий N первых членов данной прогрессии: A + 0*D, A + 1*D, 
	A + 2·D, A + 3·D, . . . .
	*/
	/*const int n = 5;
	int arr[n];
	int a, d;
	cin >> a >> d;
	//1 способ
	/*for (int i = 0; i < n; i++) {
		arr[i] = a+i*d; 
	}*/
	//2 способ
	/*arr[0] = a;
	for (int i = 1; i < n; i++) {
		arr[i] = arr[i - 1] + d;
	}
	for (int i = 0; i < n; i++) cout << arr[i] << ' ';*/
	/*
	Array7. Дан массив размера N. Вывести его элементы в обратном порядке.
	*/
	/*const int n = 5;
	int arr[n];
	for (int i = 0; i < n; i++) arr[i] = rand() % 100;
	//вывод массива в строку
	for (int i = 0; i < n; i++) cout << arr[i] << ' ';
	cout << endl;
	//вывод массива в строку обратном порядке
	for (int i = n-1; i >= 0; i--) cout << arr[i] << ' ';*/
	/*Array8.Дан целочисленный массив размера N.Вывести все содержащиеся 
	в данном массиве нечетные числа в порядке возрастания их индексов, 
	а также их количество K.*/
	/*const int n = 5;
	int arr[n];
	for (int i = 0; i < n; i++) arr[i] = rand() % 100;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) cout << arr[i] << ' ';
	}*/
	/*
	Array18. Дан массив A ненулевых целых чисел размера 10. 
	Вывести значение первого из тех его элементов AK, которые 
	удовлетворяют неравенству AK < A10. Если таких элементов нет, 
	то вывести 0.
	*/
	/*const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++) arr[i] = rand() % 100;

	bool found = false;
	for (int i = 0; i < n; i++) {
		if (arr[i] < arr[n - 1]) {
			cout << arr[i] << ' ';
			found = true;
			break;
		}
	}
	if (!found) cout << 0;*/
	/*
	//Array20. Дан массив размера N и целые числа K и L 
	//(1 ≤ K ≤ L ≤ N). Найти сумму элементов массива с номерами от K 
	//до L включительно.
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++) arr[i] = rand() % 100;
	int k, l;
	cin >> k >> l;
	int sum = 0;
	for (int i = k; i <= l; i++) sum += arr[i];
	return 0;
	*/
}