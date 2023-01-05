#include<iostream>
using namespace std;

const int rows = 10; const int cols = 10;

void FillRand(int arr[rows][cols], const int rows, const int cols);
void FillRand(double arr[rows][cols], const int rows, const int cols);
void FillRand(float frr[rows][cols], const int rows, const int cols);
void FillRand(char crr[rows][cols], const int rows, const int cols);

void Print(int arr[rows][cols], const int rows, const int cols);
void Print(double drr[rows][cols], const int rows, const int cols);
void Print(float frr[rows][cols], const int rows, const int cols);
void Print(char crr[rows][cols], const int rows, const int cols);

int Sum(int arr[rows][cols], const int rows, const int cols);
double Sum(double drr[rows][cols], const int rows, const int cols);
float Sum(float frr[rows][cols], const int rows, const int cols);
char Sum(char crr[rows][cols], const int rows, const int cols);

double Avg(int arr[rows][cols], const int rows, const int cols);
double Avg(double drr[rows][cols], const int rows, const int cols);
float Avg(float frr[rows][cols], const int rows, const int cols);
char Avg(char crr[rows][cols], const int rows, const int cols);

int MinValue(int arr[rows][cols], const int rows, const int cols);
double MinValue(double drr[rows][cols], const int rows, const int cols);
float MinValue(float frr[rows][cols], const int rows, const int cols);
char MinValue(char crr[rows][cols], const int rows, const int cols);

int MaxValue(int arr[rows][cols], const int rows, const int cols);
double MaxValue(double drr[rows][cols], const int roes, const int cols);
float MaxValue(float frr[rows][cols], const int rows, const int cols);
char MaxValue(char crr[rows][cols], const int rows, const int cols);


void main()
{
	setlocale(LC_ALL, "");
	int arr[rows][cols]{};
	cout << "Элементы двумерного массива типа int: " << endl;
	FillRand(arr, rows, cols); Print(arr, rows, cols);
	cout << "Сумма элеменов в массиве: " << Sum(arr, rows, cols) << endl;
	cout << "Среднее арефмитическое элеменов в массиве: " << Avg(arr, rows, cols) << endl;
	cout << "Минимальное значение элемента в массиве: " << MinValue(arr, rows, cols) << endl;
	cout << "Максимальное значение элимента в массиве: " << MaxValue(arr, rows, cols) << endl;

	cout << "______________________________________________________________________________" << "\n\n";
	cout << "Элементы двумерного массива типа double: " << endl;
	double drr[rows][cols]{};
	FillRand(drr, rows, cols); Print(drr, rows, cols);
	cout << "Сумма элементов в массиве: " << Sum(drr, rows, cols) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(drr, rows, cols) << endl;
	cout << "Минимальное значение элемента в массиве: " << MinValue(drr, rows, cols) << endl;
	cout << "Максимальное значение элимента в массиве: " << MaxValue(drr, rows, cols) << endl;

	cout << "______________________________________________________________________________" << "\n\n";
	cout << "Элементы двумерного массива типа float: " << endl;
	float frr[rows][cols]{};
	FillRand(frr, rows, cols); Print(frr, rows, cols);
	cout << "Сумма элементов в массиве: " << Sum(frr, rows, cols) << endl;
	cout << "Среднее арефмитическое элеменов в массиве: " << Avg(frr, rows, cols) << endl;
	cout << "Минимальное значение элемента в массиве: " << MinValue(frr, rows, cols) << endl;
	cout << "Максимальное значение элимента в массиве: " << MaxValue(frr, rows, cols) << endl;

	cout << "______________________________________________________________________________" << "\n\n";
	cout << "Элементы двумерного массива типа char: " << endl;
	char crr[rows][cols]{};
	FillRand(crr, rows, cols); Print(crr, rows, cols);
	cout << "Сумма элементов в массиве: " << Sum(crr, rows, cols) << endl;
	cout << "Среднее арефмитическое элеменов в массиве: " << Avg(crr, rows, cols) << endl;
	cout << "Минимальное значение элемента в массиве: " << MinValue(crr, rows, cols) << endl;
	cout << "Максимальное значение элимента в массиве: " << MaxValue(crr, rows, cols) << endl;
}

void FillRand(int arr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double drr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			drr[i][j] = rand() % 100; drr[i][j] /= 100;
		}
	}
}
void FillRand(float frr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			frr[i][j] = rand() % 100; frr[i][j] /= 1000;
		}
	}
}
void FillRand(char crr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			crr[i][j] = rand() % 100;
		}
	}
}

void Print(int arr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{	
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(double drr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << drr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(float frr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << frr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(char crr[rows][cols], const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << crr[i][j] << "\t";
		}
		cout << endl;
	}
}

int Sum(int arr[rows][cols], const int rows, const int cols)
{
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(double drr[rows][cols], const int rows, const int cols)
{
	double sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += drr[i][j];
		}
	}
	return sum;
}
float Sum(float frr[rows][cols], const int rows, const int cols)
{
	float sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += frr[i][j];
		}
	}
	return sum;
}
char Sum(char crr[rows][cols], const int rows, const int cols)
{
	char sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += crr[i][j];
		}
	}
	return sum;
}

double Avg(int arr[rows][cols], const int rows, const int cols)
{
	return (double)Sum(arr, rows, cols) / (rows * cols);
}
double Avg(double drr[rows][cols], const int rows, const int cols)
{
	return Sum(drr, rows, cols) / (rows * cols);
}
float Avg(float frr[rows][cols], const int rows, const int cols)
{
	return Sum(frr, rows, cols) / (rows * cols);
}
char Avg(char crr[rows][cols], const int rows, const int cols)
{
	return Sum(crr, rows, cols) / (rows * cols);
}

int MinValue(int arr[rows][cols], const int rows, const int cols)
{
	int min = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
double MinValue(double drr[rows][cols], const int rows, const int cols)
{
	double min = drr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (drr[i][j] < min)min = drr[i][j];
		}
	}
	return min;
}
float MinValue(float frr[rows][cols], const int rows, const int cols)
{
	float min = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (frr[i][j] < min)min = frr[i][j];
		}
	}
	return min;
}
char MinValue(char crr[rows][cols], const int rows, const int cols)
{
	char min = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (crr[i][j] < min)min = crr[i][j];
		}
	}
	return min;
}

int MaxValue(int arr[rows][cols], const int rows, const int cols)
{
	int max = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
double MaxValue(double drr[rows][cols], const int roes, const int cols)
{
	double max = drr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (drr[i][j] > max)max = drr[i][j];
		}
	}
	return max;
}
float MaxValue(float frr[rows][cols], const int rows, const int cols)
{
	float max = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (frr[i][j] > max)max = frr[i][j];
		}
	}
	return max;
}
char MaxValue(char crr[rows][cols], const int rows, const int cols)
{
	char max = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (crr[i][j] > max)max = crr[i][j];
		}
	}
	return max;
}