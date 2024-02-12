#include<iostream>
#include <locale>
#include <cmath>

using namespace std;

double find_D(double a, double b, double c) {
	return pow(b, 2) - 4 * a * c;
}
int main2() {
	setlocale(LC_ALL, "Russian");

	double a, b, c, D;

	cout << "Введите коэффициенты уравнения: " << endl;
	cin >> a >> b >> c;

	D = find_D(a, b, c);

	if (D < 0) {
		cout << "У уравнения нет решений" << endl;
	}
	else
	{
		double y1 = (-b + sqrt(D)) / (2 * a);
		double y2 = (-b - sqrt(D)) / (2 * a);

		if (y1 > 0) {
			double x1 = sqrt(y1);
			double x2 = -sqrt(y1);
			cout << "Корни уравнения: " << x1 << ", " << x2;
			if (y2 > 0) {
				double x3 = sqrt(y2);
				double x4 = -sqrt(y2);
				cout << ", " << x3 << ", " << x4;
			}
			else if (y2 == 0) {
				cout << ", " << 0;
			}
		}
		else if (y1 == 0) {
			cout << "Корни уравнения: " << 0;
			if (y2 > 0) {
				double x3 = sqrt(y2);
				double x4 = -sqrt(y2);
				cout << ", " << x3 << ", " << x4;
			}
		}

		else if (y2 > 0) {
			double x1 = sqrt(y2);
			double x2 = -sqrt(y2);
			cout << "Корни уравнения: " << x1 << ", " << x2 << endl;
		}
		else if (y2 == 0) {
			cout << "Корни уравнения: " << 0 << endl;
		}
		else {
			cout << "У уравнения нет решений" << endl;
		}
	}

	return 0;
}