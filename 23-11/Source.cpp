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
	//����� ������� �� ����� � ���� �������
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
	//���� �����
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i][i];
	}
	cout << " sum = " << sum << endl;
	*/
	
	// ��������� ������� ������ ������� �� -40 �� 40. 
	//������� ������� �� �����
	// ���������� ���-�� ������������� ��������� �� ������� ���������
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
	//����� ������� �� ����� � ���� �������
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
	//����� � ������� ���������
	int qty = 0;
	for (int k = 0; k < n; k++) {
		if (arr[k][k] > 0) {
			qty++;
		}
	}
	//������� ���������
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
	//����� ������� �� ����� � ���� �������
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
	//����� � ������� ���������
	int qty = 0;
	for (int k = 0; k < n; k++) {
		if (arr[k][k] % 2 == 0) {
			qty++;
		}
	}
	//������� ���������
	cout << qty;
	*/

	// ������� ����� ����� ��������� ������� �� 10 �� 99
	// ����� ���-�� ��������� ������� ���������,
	// ��������� �� 6 � �������� 1
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
	//����� ������� �� ����� � ���� �������
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
	//����� � ������� ���������
	int qty = 0;
	for (int k = 0; k < n; k++) {
		if (arr[k][k] % 6 == 1) {
			qty++;
		}
	}
	//������� ���������
	cout << qty;
	*/
	// ������� ����� ����� ��������� ������� �� -20 �� 30
	// ����� ������������ ��������� ������� ���������,
	// ��������� �� 7 � �������� 2, 4, 5
	//if (arr[i][i]%7 == 2 || arr[i][i]%7 == 4 || arr[i][i]%7 == 5)
	
	//������� �������� ��������� ��������� 'x' ��� 'o'
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
	//�������� ��� �������� ��������
	//�������� �����
	//� 0-� ������ ��� ��������
	/*if (field[0][0] == 'x' && field[0][1] == 'x' && field[0][2] == 'x') {
		cout << "x win" << endl;
	}
	//� 1-� ������ ��� ��������
	if (field[1][0] == 'x' && field[1][1] == 'x' && field[1][2] == 'x') {
		cout << "x win" << endl;
	}
	//�� 2-� ������ ��� ��������
	if (field[2][0] == 'x' && field[2][1] == 'x' && field[2][2] == 'x') {
		cout << "x win" << endl;
	}
	//�������� ��������
	//� 0-�  ������� ��� ��������
	if (field[0][0] == 'x' && field[1][0] == 'x' && field[2][0] == 'x') {
		cout << "x win" << endl;
	}
	//� 1-�  ������� ��� ��������
	if (field[0][1] == 'x' && field[1][1] == 'x' && field[2][1] == 'x') {
		cout << "x win" << endl;
	}
	//�� 2-� ������� ��� ��������
	if (field[0][2] == 'x' && field[1][2] == 'x' && field[2][2] == 'x') {
		cout << "x win" << endl;
	}
	//�������� ����������
	//� ������� ��������� ��� ��������
	if (field[0][0] == 'x' && field[1][1] == 'x' && field[2][2] == 'x') {
		cout << "x win" << endl;
	}
	//� �������� ��������� ��� ��������
	if (field[0][2] == 'x' && field[1][1] == 'x' && field[2][0] == 'x') {
		cout << "x win" << endl;
	}*/
	
	// ��������� ������� ������� �� 0 �� 100
	//����� ������������ ������� �� �������� ���������
	return 0;
}