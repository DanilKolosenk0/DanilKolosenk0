#include <iostream>
using namespace std;

void func(int** arr, int n)
{
	int l = 1;
	for (int i = 0; i < n; i++)
	{
		for (int q = 0; q < n; q++)
		{
			if (l % 2 == 0)
			{
				arr[i][q] = 0;
				cout << arr[i][q] << " ";
			}
			else
			{
				cout << arr[i][q] << " ";
			}
		}
		l++;
		cout << endl;
	}
}

int main()
{
	int n1;
	cout << "Enter size of matrix: ";
	cin >> n1;
	int** arr;
	arr = new int* [n1];
	for (int i = 0; i < n1; i++)
	{
		arr[i] = new int[n1];
	}
	for (int i = 0; i < n1; i++)
	{
		for (int q = 0; q < n1; q++)
		{
			arr[i][q] = 1;
		}
	}
	func(arr, n1);
	delete[] arr;
	system("pause");
	return 0;
}

