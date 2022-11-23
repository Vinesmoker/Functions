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
	cout << "������� ����� ������: "; cin >> n;
	elevator(n);
#endif // ELEVATOR
	int n;
	cout << "������� ����� ��� ���������� ����������: "; cin >> n;
	cout << factorial(n) << endl;
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << " �����" << endl;
	elevator(floor - 1);
	cout << "�� �� " << floor << " �����" << endl;
}
int factorial(int n)
{
	//if (n == 0)return 1;
	//else return n * factorial(n - 1);
	return n == 0 ? 1: n * factorial(n - 1);
}