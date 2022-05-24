#pragma once
#include <iostream>
#include <ctime>
using namespace std;
void fill_array(int* mas, const int size, int left, int right) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % (right - left + 1) + left;
	}
}
void print_array(int* mas, const int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << ' ';
	}
	cout << endl;
}
// C помощью функции найти номер максимального элемента в массиве
int pos_max(int* mas, const int size) {
	int max = mas[0];
	int pos = 0;
	for (int i = 1; i < size; i++) {
		if (mas[i] > max) {
			max = mas[i];
			pos = i;
		}
	}
	return pos;
}
// C помощью функции найти сумму элементов массива
int sum_array(int* mas, const int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += mas[i];
	}
	return sum;
}

// C помощью функции найти произведение нечетных элементов массива

// C помощью функции найти среднее арифметическое элементов массива с четными номерами
double amean_array(int* mas, const int size) {
	int sum = 0;
	int k = 0;
	for (int i = 0; i < size; i = i + 2) {
		sum += mas[i];
		k++;
	}
	return double(sum) / k;
}
// Написать функцию, которая проверит выигрыш в крестики-нолики для любого значка
bool check_win(char field[][3], char mark) {
	//проверка строк
	if (field[0][0] == mark && field[0][1] == mark && field[0][2] == mark) return true;
	if (field[1][0] == mark && field[1][1] == mark && field[1][2] == mark) return true;
	if (field[2][0] == mark && field[2][1] == mark && field[2][2] == mark) return true;
	//проверка столбцов
	if (field[0][0] == mark && field[1][0] == mark && field[2][0] == mark) return true;
	if (field[0][1] == mark && field[1][1] == mark && field[2][1] == mark) return true;
	if (field[0][2] == mark && field[1][2] == mark && field[2][2] == mark) return true;
	//диагонали
	if (field[0][0] == mark && field[1][1] == mark && field[2][2] == mark) return true;
	if (field[0][2] == mark && field[1][1] == mark && field[2][0] == mark) return true;
}
bool check_draw(char field[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (field[i][j] == ' ') return false;
		}
	}
	return true;
}