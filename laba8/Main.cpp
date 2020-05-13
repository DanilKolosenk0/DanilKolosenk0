Main
#include <iostream>
using namespace std;

template <typename T>
class MAtrix
{
private:
	int row, column;
	T** matrix, per;
public:
	MAtrix() {};
	MAtrix(int row, int column)
	{
		this->row = row;
		this->column = column;
		matrix = new T * [row];
		for (int i = 0; i < row; i++)
		{
			matrix[i] = new T[column];
		}
	}
	~MAtrix()
	{
		delete[] matrix;
	}
	void Initialize()
	{
		cout << "Enter your digits: ";
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				cin >> matrix[i][j];
			}
		}
		cout << endl;
	}
	void Display()
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
	void SetRow(int row)
	{
		this->row = row;
	}
	void SetColumn(int column)
	{
		this->column = column;
	}
	void Sort()
	{
		for (int l = 0; l < row; l++)
		{
			for (int i = 0; i < column - 1; i++) {
				for (int j = 0; j < column - i - 1; j++) {
					if (matrix[l][j] > matrix[l][j + 1])
					{
						per = matrix[l][j];
						matrix[l][j] = matrix[l][j + 1];
						matrix[l][j + 1] = per;
					}
				}
			}
		}
	}
};

int main()
{
	MAtrix<double> matr(5, 7);
	matr.Initialize();
	matr.Sort();
	matr.Display();
	system("pause");
	return 0;
}
