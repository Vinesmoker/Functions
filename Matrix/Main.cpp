#include<iostream>
using namespace std;

class Matrix
{
private:
	int rows;
	int cols;
	double* data;

public:
	//Constructors:
	Matrix() : rows(0), cols(0), data(nullptr){}
	Matrix(int rows, int cols) : rows(rows), cols(cols), data(new double[rows * cols])
	{
		for (int i = 0; i < rows * cols; i++)
		{
			data[i] = 0;
		}
	}
	Matrix(int rows, int cols, double value) : rows(rows), cols(cols), data(new double[rows * cols])
	{
		for (int i = 0; i < rows * cols; i++)
		{
			data[i] = value;
		}
	}
	Matrix(int rows, int cols, bool random) : rows(rows), cols(cols), data(new double[rows * cols])
	{
		if (random)
		{
			for (int i = 0; i < rows * cols; i++)
			{
				data[i] = rand() % 10;
			}
		}
		else {
			for (int i = 0; i < rows * cols; i++) 
			{
				data[i] = 0;
			}
		}
	}

	//Destructor:
	~Matrix()
	{
		delete[] data;
	}

	//Methods:
	double& operator()(int row, int col)
	{
		return data[row * cols + col];
	}
	double operator()(int row, int col) const
	{
		return data[row * cols + col];
	}
	int getRows()const
	{
		return rows;
	}
	int getCols()const
	{
		return cols;
	}
	Matrix transpose()const
	{
		Matrix result(cols, rows);
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				result(j, i) = data[i * cols + j];
			}
		}
		return result;
	}
	void Print()const
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << data[i * cols + j] << "\t";
			}
			cout << endl;
		}
	}

	//Operators:
	Matrix operator+(const Matrix& other)
	{
		Matrix result(rows, cols);
		for (int i = 0; i < rows * cols; i++)
		{
			result.data[i] = data[i] + other.data[i];
		}
		return result;
	}
	Matrix operator-(const Matrix& other)
	{
		Matrix result(rows, cols);
		for (int i = 0; i < rows * cols; i++)
		{
			result.data[i] = data[i] - other.data[i];
		}
		return result;
	}
	Matrix operator*(const Matrix& other)const
	{
		Matrix result(rows, other.cols);
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < other.cols; j++)
			{
				for (int c = 0; c < cols; c++)
				{
					result(i, j) += data[i * cols + c] * other(c, j);
				}
			}
		}
		return result;
	}
	Matrix operator/(const Matrix& other)const
	{
		Matrix result(rows, other.cols);
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < other.cols; j++)
			{
				for (int c = 0; c < cols; c++)
				{
					result(i, j) += data[i * cols + c] / other(c, j);
				}
			}
		}
		return result;
	}
	Matrix& operator+=(const Matrix& other)
	{
		for (int i = 0; i < rows * cols; i++)
		{
			data[i] += other.data[i];
		}
		return *this;
	}
	Matrix& operator-=(const Matrix& other)
	{
		for (int i = 0; i < rows * cols; i++)
		{
			data[i] -= other.data[i];
		}
		return *this;
	}
	Matrix& operator*=(const Matrix& other)
	{
		*this = *this * other;
		return *this;
	}
	Matrix& operator/=(const Matrix& other)
	{
		*this = *this / other;
		return *this;
	}

};



void main()
{
	Matrix A(3, 3, true);
	A.Print();
	cout << "\n\n";
	Matrix B(3, 3, true);
	B.Print();
	cout << "\n\n";
	Matrix C = A + B;
	C.Print();
	cout << "\n\n";
	Matrix D = A - B;
	D.Print();
	cout << "\n\n";
	Matrix E = A * B;
	E.Print();
	cout << "\n\n";
	Matrix F = A / B;
	F.Print();
}