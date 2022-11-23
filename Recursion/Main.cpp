#include<iostream>
using namespace std;
//#define ELEVATOR

void elevator(int floor);
int factorial(int n = 6);

void main ()
{
	setlocale(LC_ALL, "");
#ifdef ELEVATOR
	cout << "Hello Recursion" << endl;
	int n;
	cout << "Введите номер этажаж: "; cin >> n;
	elevator(n);
#endif // ELEVATOR
	int n;
	cout << "Введите число для вычисления факториала: "; cin >> n;
	cout << factorial(n) << endl;
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