#include<iostream>
using namespace std;

#define delimiter "\n-------------------------------------------------------------------\n"
const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n, int minRand = 70, int maxRand = 80); // Реализация
void FillRand(double arr[], const double n, double minRand = 0, double maxRand = 100);
void FillRand(int i_arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const double n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void ShiftLeft(int arr[], const int n, int numOfShifts);
void ShiftRight(int arr[], const int n, int numOfShifts);
void Search(int arr[], int arr2[], const int n);
int Unique(int arr[], const int n);
void Sort(int arr[], const int n);

void main ()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n]{}; int arr2[n]{};
	int numOfShifts;
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арефмитическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение элемена массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение элемента в массиве: " << maxValueIn(arr, n) << endl;
	cout << "Enter the number of shifts of the array: "; cin >> numOfShifts;
	cout << "Shift left: " << endl;
	ShiftLeft(arr, n, numOfShifts); cout << endl;
	cout << "Shift right: " << endl;
	ShiftRight(arr, n, numOfShifts);
	cout << "Searching repetitions of numbers in the array: " << endl;
	Search(arr, arr2, n);
	cout << "Sort the array in ascending order: " << endl;
	Sort(arr, n); Print(arr, n);
	cout << "Unique numbers: " << endl;
	Unique(arr, n); Print(arr, n);

	cout << delimiter << endl;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(arr, SIZE) << endl;
	cout << "Среднее арефмитическое элементов массива: " << Avg(arr, SIZE) << endl;
	cout << "Минимальное значение элемена массива: " << minValueIn(arr, SIZE) << endl;
	cout << "Максимальное значение элемента в массиве: " << maxValueIn(arr, SIZE) << endl;

	
	int i_arr2[ROWS][COLS];
	FillRand(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);

}   
// Statistic
void FillRand(int arr[], const int n, int minRand, int maxRand) // Прототип
{
	if (minRand > maxRand)
	{
		int buff = minRand; minRand = maxRand; maxRand = buff;
	}
	if (minRand == maxRand)maxRand++;
	//Заполнение случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void Print(int arr[], const int n)
{
	//Вывод массива на экран:
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
int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
// Actions with the array
void ShiftLeft(int arr[], const int n, int numOfShifts)
{
	for (int i = 0; i < numOfShifts; i++)
	{
		int buff = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buff;
		Print(arr, n);
	}
	cout << endl;
}
void ShiftRight(int arr[], const int n, int numOfShifts)
{
	for (int i = 0; i < numOfShifts; i++)
	{
		int buff = arr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buff;
		Print(arr, n);
	}
	cout << endl;
}
void Search(int arr[], int arr2[], const int n)
{
	int min = minValueIn(arr, n);
	int max = maxValueIn(arr, n);
	int count = 0;
	while (max - min < n)max++;
	for (int i = 0; i < n; i++)
	{
		arr[i] = min + rand() % (max - min);
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])count++;
		}
		arr2[i] = count;
		count = 0;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])break;
		}
		if (arr2[i] != 0)cout << arr[i] << "\t" << arr2[i] << endl;
	}
}
int Unique(int arr[], const int n)
{
	bool random = false;
	for (int i = 0; i < n;)
	{
		int min = minValueIn(arr, n);
		int max = maxValueIn(arr, n);
		while (max - min < n)max++;
		bool random;
		for (int i = 0; i < n;)
		{
			random = false;
			int ranVal = rand() % (max - min) + (min);
			for (int j = 0; j < i; j++)
			{
				if (arr[j] == ranVal)
				{
					random = true;
					break;
				}
			}
			if (random == false)
			{
				arr[i] = ranVal; i++;
			}
		}
		return arr[n];
	}
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buff = arr[i];
				arr[i] = arr[j];
				arr[j] = buff;
			}
		}
	}
}

void FillRand(double arr[], const double n, double minRand, double maxRand) // Прототип
{
	if (minRand > maxRand)
	{
		int buff = minRand; minRand = maxRand; maxRand = buff;
	}
	if (minRand == maxRand)maxRand++;

	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % int((maxRand - minRand) + minRand);
		arr[i] /= 100;
	}
}
void Print(double arr[], const double n)
{

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
// Actions with double array
void FillRand(int i_arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			i_arr[i][j] = rand() % 100;
		}
	}
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}