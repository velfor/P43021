#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//Array51.���� ������� A � B ����������� ������� N.
	//�������� ������� �� ���������� � ������� ������� 
	//�������� ���������������� ������� A, � ����� � 
	//�������� ���������������� ������� B.

	/*const int n = 10;
	int a[n], b[n];
	//���������� ������� a, �������� �� -50 �� 50
	for (int i = 0; i < n; i++) a[i] = rand() % 101-50;
	//����� ������� �
	for (int i = 0; i < n; i++) cout << a[i] << ' ';
	cout << endl;
	//���������� ������� b, �������� �� -50 �� 0
	for (int i = 0; i < n; i++) b[i] = rand() % 51-50;
	//����� ������� b
	for (int i = 0; i < n; i++) cout << b[i] << ' ';
	cout << endl;

	int temp;
	//����� ������� ��������� �������
	for (int i = 0; i < n; i++) {
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	//����� ������� �
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	//����� ������� b
	for (int i = 0; i < n; i++) {
		cout << b[i] << ' ';
	}
	cout << endl;*/
	/*
	Array52. ��� ������ A ������� N. ������������ ����� 
	������ B ���� �� �������, �������� �������� 
	������������ ��������� �������:
		B[K] = 2�A[K], ���� A[K] < 5,
		A[K]/2 � ��������� ������.
	*/
	/*const int n = 10;
	double a[n], b[n];
	//���������� ������� a, �������� �� -50 �� 50
	for (int i = 0; i < n; i++) a[i] = rand() % 101 - 50;
	//����� ������� �
	for (int i = 0; i < n; i++) cout << a[i] << ' ';
	cout << endl;
	//������������ ������� b
	for (int i = 0; i < n; i++) {
		if (a[i] < 5) {
			b[i] = 2 * a[i];
		}
		else {
			b[i] = a[i] / 2;
		}
	}
	//����� ������� b
	for (int i = 0; i < n; i++) cout << b[i] << ' ';
	cout << endl;*/
	/*
	Array53. ���� ��� ������� A � B ����������� ������� N. 
	������������ ����� ������ C ���� �� �������, ������ 
	������� �������� ����� ������������� �� ��������� 
	�������� A � B � ��� �� ��������.
	*/
	/*const int n = 10;
	int a[n], b[n], c[n];
	//���������� ������� a, �������� �� -50 �� 50
	for (int i = 0; i < n; i++) a[i] = rand() % 101 - 50;
	//����� ������� �
	for (int i = 0; i < n; i++) cout << a[i] << ' ';
	cout << endl;
	//���������� ������� b, �������� �� -50 �� 50
	for (int i = 0; i < n; i++) b[i] = rand() % 101 - 50;
	//����� ������� b
	for (int i = 0; i < n; i++) cout << b[i] << ' ';
	cout << endl;
	//��������� ������ �
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
	//����� ������� �
	for (int i = 0; i < n; i++) cout << c[i] << ' ';
	cout << endl;*/

}