#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
	int m, n, k = 0, i, j;
	cout << "making the matrix of dimension m x n\n\ninput m: ";
	cin >> m;
	cout << "input n: ";
	cin >> n;

	int** matrix = new int* [m];
	for (int i = 0; i < m; i++)
	{
		matrix[i] = new int[n];
	 }
	int* out = new int[m];

	srand((unsigned)time(NULL));

	for (int i = 0; i < m; i++)
	{
		out[k] = 0;
		for (j = 0; j < n; j++)
		{
			matrix[i][j] = rand() % 10;
			if (i % 2 != 0)
			{
				out[k] += matrix[i][j];
			}
		}
		if (i % 2 != 0) { k++; }
	}
	cout << "\n=====================\n";
	for (int i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << matrix[i][j]<<"   ";
			}
		cout << endl;
	}
	cout << "\n=====================\n";
	for (int i = 0; i < k; i++)
	{
		cout << out[i] << "   ";
	}

	for (int i = 0; i < m; i++)
	{
		delete[] matrix[i];	
	}
	delete[] matrix, out;
	
	_getch();
	return 0;
}
