#include<iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

int main2() {
	setlocale(LC_ALL, "Russian");

	double x, y;

	cout << "������� � � �" << endl;

	cin >> x >> y;

	cout << (abs(x) - abs(y)) / (1 + abs(x * y)) << endl;


	return 0;
}