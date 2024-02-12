#include<iostream>
#include <locale>

using namespace std;

int main1() {
	setlocale(LC_ALL, "Russian");
	
	double len;

	cout << "Введите длинну ребра:" << endl;

	cin >> len;

	cout << "Объем куба: " << len*len*len << endl;
	cout << "Его площадь боковой поверхности: "<< len*len*4 << endl;

	return 0;
}