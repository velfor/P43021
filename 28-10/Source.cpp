//��������� �����
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	//1. ������� �����, ���� �� ����� ������ 0.
	/*int a;
	cin >> a;
	while (a != 0) {
		cout << a << ' ';
		cin >> a;
	}*/
	//2. � ������ ���� ��������: ������� ����� ����� � �� �����
	/*int a;
	
	int n = 0;
	int sum = 0;
	cin >> a;
	while (a != 0) {
		cout << a << ' ';
		n++;
		sum += a; // sum = sum + a;
		cin >> a;
	}
	cout << endl << "n = " << n <<  " sum = " << sum << endl;*/
	/*While1. ���� ������������� ����� A � B(A > B).�� ������� 
	����� A ��������� ����������� ��������� ���������� �������� 
	����� B(���	���������).�� ��������� �������� ��������� � 
	�������, ����� ������� ��� b ���������� � a*/
	/*����� ������� */
	/*int a, b;
	cin >> a >> b;
	int n = 0;
	int sum = 0;
	while (a >= b) {
		a = a - b;
	}
	cout << a << endl;*/
	/*Series1. ���� ������ ������������ �����.����� �� �����.*/
	/*double a, sum = 0;
	int i = 0;
	while (i < 9) {
		cin >> a;
		sum += a; // sum = sum + a
		i++;
	}
	cout << sum << endl;*/
	/*Series2.���� 5 ������������ �����. ����� �� ������������.*/
	/*double a, pr = 1.0;
	int i = 0;
	while (i < 5) {
		cin >> a;
		pr *= a;
		i++;
	}
	cout << pr << endl;*/
	/*Series3. ���� 5 ������������ �����.����� �� ������� ��������������.*/
	/*double a, sum = 0;
	int i = 0;
	while (i < 5) {
		cin >> a;
		sum += a; // sum = sum + a
		i++;
	}
	cout << sum / i << endl;*/
	double a;
	cin >> a;
	cout << round(a);
	//cout << round(a) << endl;
	return 0;
}