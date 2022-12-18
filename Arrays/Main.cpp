#include<iostream>
using namespace std;

#define delimiter "\n-------------------------------------------------------------------\n"
const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n, int minRand = 70, int maxRand = 80); // Реализация
void FillRand(double arr[], const double n, double minRand = 0, double maxRand = 0.9);
void FillRand(float arr[], const float n, float minRand = 0, float maxRand = 0.9);
void FillRand(char arr[], const int n, int minRand = 50, int maxRand = 255);

void FillRand(int i_arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const double n);
void Print(float arr[], const float n);
void Print(char arr[], const int n);

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double drr[], const double n);
float Sum(float frr[], const float n);
char Sum(char crr[], const int n);

int Avg(int arr[], const int n);
double Avg(double drr[], const double n);
float Avg(float frr[], const float n);
char Avg(char crr[], const int n);


int minValueIn(int arr[], const int n);
double minValueIn(double drr[], const double n);
float minValueIn(float frr[], const float n);
char minValueIn(char crr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double drr[], const double n);
float maxValueIn(float frr[], const float n);
char maxValueIn(char crr[], const int n);

void ShiftLeft(int arr[], const int n, int numOfShifts);
void ShiftLeft(double drr[], const int n, int numOfShifts);
void ShiftLeft(float frr[], const int n, int numOfShifts);
void ShiftLeft(char crr[], const int n, int numOfShifts);

void ShiftRight(int arr[], const int n, int numOfShifts);
void ShiftRight(double drr[], const int n, int numOfShifts);
void ShiftRight(float frr[], const int n, int numOfShifts);
void ShiftRight(char crr[], const int n, int numOfShifts);

void Search(int arr[], int arr2[], const int n);
void Search(double drr[], int drr2[], const int n);
void Search(float frr[], int frr2[], const int n);
void Search(char crr[], int crr2[], const int n);

int Unique(int arr[], const int n);
void Unique(double drr[], const int n);
void Unique(float frr[], const int n);
void Unique(char crr[], const int n);

void Sort(int arr[], const int n);
void Sort(double drr[], const int n);
void Sort(float frr[], const int n);

void main()
{
	const int n = 10;
	int arr[n]{}; int arr2[n]{};
	int numOfShifts;
	FillRand(arr, n);
	Print(arr, n);
	cout << "The sum of elements in the array: " << Sum(arr, n) << endl;
	cout << "Arithmetic mean of elements in the array: " << Avg(arr, n) << endl;
	cout << "Min value in the aaray: " << minValueIn(arr, n) << endl;
	cout << "Max value in the array: " << maxValueIn(arr, n) << endl;
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

	const int SIZE3 = 10;
	char crr[SIZE3]; int crr2[SIZE3];
	FillRand(crr, SIZE3);
	Print(crr, SIZE3);
	cout << "The sum of elements in the array: " << Sum(crr, SIZE3) << endl;
	cout << "Arithmetic mean of elements in the array: " << Avg(crr, SIZE3) << endl;
	cout << "Min value in the array: " << minValueIn(crr, SIZE3) << endl;
	cout << "Max value in the array: " << maxValueIn(crr, SIZE3) << endl;
	cout << "Shift left: " << endl;
	ShiftLeft(crr, SIZE3, numOfShifts);
	cout << "Shift right: " << endl;
	ShiftRight(crr, SIZE3, numOfShifts);
	cout << "Searching repetitions of numbers in the array: " << endl;
	Search(crr, crr2, n);
	cout << "Unique numbers: " << endl;
	Unique(crr, n);


	cout << delimiter << endl;

	const int SIZE = 10;
	double drr[SIZE]; int drr2[SIZE];
	FillRand(drr, SIZE);
	Print(drr, SIZE);
	cout << "The sum of elements in the array: " << Sum(drr, SIZE) << endl;
	cout << "Arithmetic mean of elements in the array: " << Avg(drr, SIZE) << endl;
	cout << "Min value in the array: " << minValueIn(drr, SIZE) << endl;
	cout << "Max value in the array: " << maxValueIn(drr, SIZE) << endl;
	cout << "Shift left: " << endl;
	ShiftLeft(drr, SIZE, numOfShifts);
	cout << endl << "Shift right: " << endl;
	ShiftRight(drr, SIZE, numOfShifts);
	cout << "Searching repetitions of numbers in the array: " << endl;
	Search(drr, drr2, SIZE);
	cout << "Unique numbers: " << endl;
	Unique(drr, SIZE); cout << endl;
	cout << "Sort the array in ascending order: " << endl;
	Sort(drr, SIZE); Print(drr, SIZE);

	cout << delimiter << endl;

	const int SIZE2 = 10;
	float frr[SIZE2]; int frr2[SIZE2];
	FillRand(frr, SIZE2);
	Print(frr, SIZE2);
	cout << "The sum of elements in the array: " << Sum(frr, SIZE2) << endl;
	cout << "Arithmetic mean of elements in the array: " << Avg(frr, SIZE2) << endl;
	cout << "Min value in the array: " << minValueIn(frr, SIZE2) << endl;
	cout << "Max value in the array: " << maxValueIn(frr, SIZE2) << endl;
	cout << "Shift left: " << endl;
	ShiftLeft(frr, SIZE2, numOfShifts);
	cout << "Shift right: " << endl;
	ShiftRight(frr, SIZE2, numOfShifts);
	cout << "Searching pepetitions of numbers in the array: " << endl;
	Search(frr, frr2, SIZE2);
	cout << "Unique numbers: " << endl;
	Unique(frr, SIZE2);
	cout << "Sort the array in ascending order: " << endl;
	Sort(frr, SIZE2); Print(frr, SIZE2);

	cout << delimiter << endl;



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
int Avg(int arr[], const int n)
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
	int count = 0;
	for (int i = 0; i < n; i++)
	{
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
		cout << arr[i] << "\t" << arr2[i] << endl;
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
		return arr[i];
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
// Overloading
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
void FillRand(float arr[], const float n, float minRand, float maxRand)
{
	{
		if (minRand > maxRand)
		{
			float buff = minRand; minRand = maxRand; maxRand = buff;
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
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
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
}

void Print(double arr[], const double n)
{

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(float arr[], const float n)
{

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

double Sum(double drr[], const double n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += drr[i];
	}
	return sum;
}
float Sum(float frr[], const float n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += frr[i];
	}
	return sum;
}
char Sum(char crr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += crr[i];
	}
	return sum;
}

double Avg(double drr[], const double n)
{
	return Sum(drr, n) / n;
}
float Avg(float frr[], const float n)
{
	return Sum(frr, n) / n;
}
char Avg(char crr[], const int n)
{
	return Sum(crr, n) / n;
}

double minValueIn(double drr[], const double n)
{
	double min = drr[0];
	for (int i = 0; i < n; i++)
	{
		if (drr[i] < min)min = drr[i];
	}
	return min;
}
float minValueIn(float frr[], const float n)
{
	float min = frr[0];
	for (int i = 0; i < n; i++)
	{
		if (frr[i] < min)min = frr[i];
	}
	return min;
}
char minValueIn(char crr[], const int n)
{
	char min = crr[0];
	for (int i = 0; i < n; i++)
	{
		if (crr[i] < min)min = crr[i];
	}
	return min;
}

double maxValueIn(double drr[], const double n)
{
	double max = drr[0];
	for (int i = 0; i < n; i++)
	{
		if (drr[i] > max)max = drr[i];
	}
	return max;
}
float maxValueIn(float frr[], const float n)
{
	float max = frr[0];
	for (int i = 0; i < n; i++)
	{
		if (frr[i] > max)max = frr[i];
	}
	return max;
}
char maxValueIn(char crr[], const int n)
{
	char max = crr[0];
	for (int i = 0; i < n; i++)
	{
		if (crr[i] > max)max = crr[i];
	}
	return max;
}

void ShiftLeft(double drr[], const int n, int numOfShifts)
{

	for (int i = 0; i < numOfShifts; i++)
	{
		double buff = drr[0];
		for (int i = 0; i < n; i++)
		{
			drr[i] = drr[i + 1];
		}
		drr[n - 1] = buff;
		for (int i = 0; i < n; i++)
		{
			cout << drr[i] << "\t";
		}
		cout << endl;
	}
}
void ShiftLeft(float frr[], const int n, int numOfShifts)
{
	for (int i = 0; i < numOfShifts; i++)
	{
		float buff = frr[0];
		for (int i = 0; i < n; i++)
		{
			frr[i] = frr[i + 1];
		}
		frr[n - 1] = buff;
		for (int i = 0; i < n; i++)
		{
			cout << frr[i] << "\t";
		}
		cout << endl;
	}
}
void ShiftLeft(char crr[], const int n, int numOfShifts)
{
	for (int i = 0; i < numOfShifts; i++)
	{
		char buff = crr[0];
		for (int i = 0; i < n; i++)
		{
			crr[i] = crr[i + 1];
		}
		crr[n - 1] = buff;
		for (int i = 0; i < n; i++)
		{
			cout << crr[i] << "\t";
		}
		cout << endl;
	}
}

void ShiftRight(double drr[], const int n, int numOfShifts)
{
	for (int i = 0; i < numOfShifts; i++)
	{
		double buff = drr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{
			drr[i + 1] = drr[i];
		}
		drr[0] = buff;
		for (int i = 0; i < n; i++)
		{
			cout << drr[i] << "\t";
		}
		cout << endl;
	}
}
void ShiftRight(float frr[], const int n, int numOfShifts)
{
	for (int i = 0; i < numOfShifts; i++)
	{
		float buff = frr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{
			frr[i + 1] = frr[i];
		}
		frr[0] = buff;
		for (int i = 0; i < n; i++)
		{
			cout << frr[i] << "\t";
		}
		cout << endl;
	}
}
void ShiftRight(char crr[], const int n, int numOfShifts)
{
	for (int i = 0; i < numOfShifts; i++)
	{
		char buff = crr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{
			crr[i + 1] = crr[i];
		}
		crr[0] = buff;
		for (int i = 0; i < n; i++)
		{
			cout << crr[i] << "\t";
		}
		cout << endl;
	}
}

void Search(double drr[], int drr2[], const int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (drr[i] == drr[j])count++;
		}
		drr2[i] = count; count = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (drr[i] == drr[j])break;
			}
		}
		cout << drr[i] << "\t" << drr2[i] << endl;
	}
}
void Search(float frr[], int frr2[], const int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (frr[i] == frr[j])count++;
		}
		frr2[i] = count; count = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (frr[i] == frr[j])break;
			}
		}
		cout << frr[i] << "\t" << frr2[i] << endl;
	}
}
void Search(char crr[], int crr2[], const int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (int(crr[i] == crr[j]))count++;
		}
		crr2[i] = count; count = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (int(crr[i] == crr[j]))break;
			}
		}
		cout << char(crr[i]) << "\t" << crr2[i] << endl;
	}
}

void Unique(double drr[], const int n)
{
	int c = n; int min = 0; int max = 9;
	for (int i = 0; i < c; i++)
	{
		while ((max - min) < n)max++;
		bool ran = false;
		drr[i] = min + rand() % (max - min); drr[i] /= 10;
		double buff = drr[i];
		for (int j = 0; j < i; j++)
		{
			if (i == j)continue;
			if (buff == drr[j] && i != j)ran = true; c++;
		}
		if (!ran)cout << buff << "\t";
	}
}
void Unique(float frr[], const int n)
{
	int c = n; int min = 0; int max = 9;
	for (int i = 0; i < c; i++)
	{
		while ((max - min) < n)max++;
		bool ran = false;
		frr[i] = min + rand() % (max - min); frr[i] /= 100;
		float buff = frr[i];
		for (int j = 0; j < i; j++)
		{
			if (i == j)continue;
			if (buff == frr[j] && i != j)ran = true; c++;
		}
		if (!ran)cout << buff << "\t";
	}
}
void Unique(char crr[], const int n)
{
	int c = n; int min = 0; int max = 9;
	for (int i = 0; i < c; i++)
	{
		while ((max - min) < n)max++;
		bool ran = false;
		crr[i] = min + rand() % (max - min);
		char buff = crr[i];
		for (int j = 0; j < i; j++)
		{
			if (i == j)continue;
			if (buff == crr[j] && i != j)ran = true;
		}
		if (!ran)cout << buff << "\t";
	}
}

void Sort(double drr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (drr[j] < drr[i])
			{
				double buff = drr[i];
				drr[i] = drr[j];
				drr[j] = buff;
			}
		}
	}
}
void Sort(float frr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (frr[j] < frr[i])
			{
				float buff = frr[i];
				frr[i] = frr[j];
				frr[j] = buff;
			}
		}
	}
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