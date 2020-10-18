// Lab_03_1.cpp
// < Соломія Ратушна>
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 0.1
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;
	A = fabs(x * x * x);

	// спосіб 1: розгалуження в скороченій формі
	if (x<-1)
		B = fabs(2 + x) + sin(x) * sin(x);
	if (-1 <= x && x <= 1)
		B = atan((x*x*x) +1);
	if (x > 1)
		B = exp(cos (x)) + log(1/x +1);
	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// спосіб 2: розгалуження в повній формі
	if (x < -1)
		B = fabs(2 + x) + sin(x * x);
	else
		if (-1 <= x && x <= 1)
			B = atan((x * x * x) + 1);
		else
			if (x > 1)
				B = exp(cos(x)) + log(1 / x + 1);
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
