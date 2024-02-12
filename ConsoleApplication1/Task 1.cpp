#include<iostream>
#include<cmath>
#include <locale>

using namespace std;

int triangle_exists(double a, double b, double c) {
	if ((a < b + c) && (b < a + c) && (c < a + b)) {
		return 1;
	}
	return 0;
}

double find_area(double a, double b, double c, double p) {
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

double find_heig(double s, double a) {
	return 2 * s / a;
}

double find_median(double a, double b, double c) {
	return sqrt(2 * (pow(a, 2) + pow(b, 2)) - pow(c, 2)) / 2;
}

double find_bisec(double a, double b, double c, double p) {
	return 2 * sqrt(a * b * p * (p - c)) / (a + b);
}

double find_r(double p, double s) {
	return s / p;
}

double find_R(double a, double b, double c, double s){
	double rez = (a * b * c) / (4 * s);
	return rez;
}

int main1() {
	setlocale(LC_ALL, "Russian");
	double x1, x2, x3, P, s, h1, h2, h3, m1, m2, m3, b1, b2, b3, r, R;

	cout << "Введите стороны треугольника: " << endl;
	cin >> x1 >> x2 >> x3;

	if (!triangle_exists(x1,x2,x3)){
		cout << "Такого трегольника не существует" << endl;
		return 0;
	}
	P = x1 + x2 + x3;
	s = find_area(x1, x2, x3, P / 2);
	h1 = find_heig(s, x1);
	h2 = find_heig(s, x2);
	h3 = find_heig(s, x3);
	m1 = find_median(x1, x2, x3);
	m2 = find_median(x1, x3, x2);
	m3 = find_median(x2, x3, x1);
	b1 = find_bisec(x2, x3, x1, P / 2);
	b2 = find_bisec(x1, x3, x2, P / 2);
	b3 = find_bisec(x1, x2, x3, P / 2);
	r = find_r(P / 2, s);
	R = find_R(x1, x2, x3, s);
	cout << "а) Длины высот: " << h1 << ", " << h2 << ", " << h3 << endl;
	cout << "б) Длины медиан: " << m1 << ", " << m2 << ", " << m3 << endl;
	cout << "в) Длины биссектрис: " << b1 << ", " << b2 << ", " << b3 << endl;
	cout << "г) Радиус вписанной окружности: " << r << endl;
	cout << "д) Радиус описаной окружности : " << R << endl;

	return 0;
}