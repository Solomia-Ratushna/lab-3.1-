// Lab_03_1.cpp
// < ������ �������>
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 0.1
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;
	A = fabs(x * x * x);

	// ����� 1: ������������ � ��������� ����
	if (x<-1)
		B = fabs(2 + x) + sin(x) * sin(x);
	if (-1 <= x && x <= 1)
		B = atan((x*x*x) +1);
	if (x > 1)
		B = exp(cos (x)) + log(1/x +1);
	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
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
