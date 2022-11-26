#include<iostream>
using namespace std;

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(double a, int b);
double Pow(double a, int b, int buff, double c);

void main()
{
	setlocale(LC_ALL, "");
	double a; int buff = 0; double c = 0; int b;
	cout << "Hello Functions!!" << endl;
	cout << " ¬ведите 2 числа: "; cin >> a >> b;
	int s = Add(a, b);
	cout << a << " + " << b << " = " << s << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << a << " To power " << b << " = " << Pow(a, b, buff, c) << endl;
}
int Add(int a, int b)
{
	int sum = a + b;
	return sum;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(double a, int b)
{
	return a / b;
}
double Pow(double a, int b, int buff, double c)
{
	if (b == 0)a = 1;
	if (b > 0)buff = b;
	if (b < 0)buff = b * (-1);
	c = a;
	for (int i = 1; i < buff; i++)
	{
		c = c * a;
	}
	if (b > 0) return c;
	else return 1 / c;
}