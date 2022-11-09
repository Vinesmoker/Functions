#include<iostream>
using namespace std;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100); // ����������
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);

void main ()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {};

	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
}

void FillRand(int arr[], const int n, int minRand, int maxRand) // ��������
{
	if (minRand > maxRand)
	{
		int buff = minRand; minRand = maxRand; maxRand = buff;
	}
	if (minRand == maxRand)maxRand++;
	//���������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void Print(int arr[], const int n)
{
	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}