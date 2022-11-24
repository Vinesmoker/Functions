#include<iostream>
using namespace std;

//#define ELEVATOR
//#define FACTORIAL
//#define POW
//#define FIBONACCI

void elevator(int floor);
int factorial(int n = 6);
double Pow(double a, int n);
void FibLim(int n, int a = 1, int b = 1);
void FibQuant(int n, int i = 0, long long int a = 1, long long int b = 1);

void main ()
{
	setlocale(LC_ALL, "");
#ifdef ELEVATOR
	cout << "Hello Recursion" << endl;
	int n;
	cout << "Введите номер этажаж: "; cin >> n;
	elevator(n);
#endif // ELEVATOR
#ifdef FACTORIAL
	int n;
	cout << "Введите число для вычисления факториала: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL
#ifdef POW
	int a, n;
	cout << "Введите основание и показатель степени: "; cin >> a >> n;
	cout << Pow(a, n);
#endif // POW
#ifdef FIBONACCI
	int n;
	cout << "Введите предельное число: "; cin >> n;
	FibLim(n);
	cout << "\n\n";
	FibQuant(n);
#endif // FIBONACCI

}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " этаже" << endl;
	elevator(floor - 1);
	cout << "Вы на " << floor << " этаже" << endl;
}
int factorial(int n)
{
	//if (n == 0)return 1;
	//else return n * factorial(n - 1);
	return n == 0 ? 1: n * factorial(n - 1);
}
double Pow(double a, int n)
{
	//if (n == 0)return 1;
	//else if (n < 0)return 1 / a * Pow(a, n + 1);
	//else return a * Pow(a, n - 1);
	//return n == 0 ? 1 : n > 0 ? a * Pow(a, n - 1) : 1 / a * Pow(a, n + 1);
	return n == 0 ? 1 : n > 0 ? a * Pow(a, n - 1) : 1 / Pow(a, -n);
}
void FibLim(int n, int a, int b)
{
	if (a > n)return;
	cout << a << "\t";
	FibLim(n, b, a + b);
}
void FibQuant(int n, int i, long long int a, long long int b)
{
	if (i > n)return;
	cout << i << "\t" << a << endl;
	FibQuant(n, i + 1, b, a + b);
}