#include<iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	int num, num_digits_count, num_digits_summ, num_first_digits;

	cout << "Введите натуральное число: ";
	cin >> num;

	num_digits_count = 0;
	num_digits_summ = 0;
	int t = num;
	while (t > 0)
	{
		num_digits_count++;
		num_first_digits = t % 10;
		num_digits_summ += num_first_digits;
		t /= 10;
	}

	cout << "а) Количество цифр: " << num_digits_count << endl;
	cout << "б) Сумма цифр числа: " << num_digits_summ << endl;
	cout << "в) Последняя цифра числа: " << num % 10 << endl;
	cout << "г) Первая цифра числа: " << num_first_digits << endl;
	cout << "д) Предпоследняя цифра числа: " << num % 10 << endl;
	
	return 0;
}