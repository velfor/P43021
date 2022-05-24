#include <iostream>
#include <ctime>
#include "my_func.h"

using namespace std;
int main() {
	const int n = 15;
	int mas[n];
	fill_array(mas, n, -20, 20);
	print_array(mas, n);
	cout << pos_max(mas, n);
	return 0;
}