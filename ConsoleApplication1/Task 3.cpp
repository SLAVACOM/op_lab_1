#include<iostream>
#include <locale>

using namespace std;

int main1() {
	setlocale(LC_ALL, "Russian");
	
	double len;

	cout << "������� ������ �����:" << endl;

	cin >> len;

	cout << "����� ����: " << len*len*len << endl;
	cout << "��� ������� ������� �����������: "<< len*len*4 << endl;

	return 0;
}