//��������� ���������� � ������
#include <iostream>
#include <ctime>
using namespace std;
int main() {
	const int n = 12; // ��������� - ������ �������
	int arr[n]; // �������� ��������� ��� �������
	int temp;
	//���������� ������� ���������� �������
	srand(time(0));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 101-50;
	}
	//����� �������
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	/*
	//���������� ���������
	//��������� ���� ������ ���������� n ���
	for (int i = 0; i < n; i++) {
		//���� ������ ����������
		for (int j = 0; j < n - 1 -i; j++) {
			//���� ������� ������ ������� ������
			if (arr[j] > arr[j + 1]) {
				//�� �������� �� �������
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				//���� ��������, �� ���������� ��������
				//swap(arr[j], arr[j+1])
			}
		}
	}
	//����� �������
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	*/
	/*
	//����� ������������� �������� � �������
	int max = arr[0];
	int p = 0;
	for(int i=1; i < n; i++){
		if (arr[i] > max) {
			max = arr[i];
			p = i;
		}
	}
	cout << max << ' ' << p << endl;
	//����� ������������ �������� � �������
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
	//���������� ������� ������������� �� ��������
	
	for (int i = 0; i < n; i++) {
		//����� ���c��������� � �������
		int max = arr[i];
		int p = i;
		for (int j = i; j < n; j++) {
			if (arr[j] > max) {
				max = arr[j];
				p = j;
			}
		}
		//����� ������� max � arr[i]
		swap(arr[i], arr[p]);
	}
	//����� �������
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	return 0;
	

}