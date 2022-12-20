#include<iostream>
using namespace std;

int Factorial(int f);
double Pow(double num, int degree);
void FibLimit(int lim, int a = 1, int b = 1);
void FibQuantity(int quant, int count = 0, long a = 1, long b = 1);

void main()
{
	setlocale(LC_ALL, "");
	int f; double num; int degree; int lim;
	int quant;
	cout << "Введите число для вычисления его факториала: "; cin >> f;
	cout << "Результат: " << Factorial(f) << endl;
	cout << "Введите число для возведения в степень: "; cin >> num;
	cout << "Введите степень для возведения в нее числа " << num << ": "; cin >> degree;
	cout << "Результат: " << Pow(num, degree) << endl;
	cout << "Введите предельное число ряда Фибоначи: "; cin >> lim;
	cout << "Результат: "; FibLimit(lim); cout << endl;
	cout << "Введите необходимое количество элементов ряда Фибоначи: "; cin >> quant;
	cout << "Результат: " << endl;
	FibQuantity(quant);
}

int Factorial(int f)
{
	if (f == 0)return 1;
	else return f * Factorial(f - 1);
}
double Pow(double num, int degree)
{
	if (degree == 0)return 1;
	if (degree < 0)return 1 / num * Pow(num, degree + 1);
	else return num * Pow(num, degree - 1);
}
void FibLimit(int lim, int a, int b)
{
	if (a > lim)return;
	cout << a << "\t";
	FibLimit(lim, b, a + b);
}
void FibQuantity(int quant, int count, long a, long b)
{
	if (count > quant)return;
	cout << count << "\t" << a << "\n";
	FibQuantity(quant, count + 1, b, a + b);
}