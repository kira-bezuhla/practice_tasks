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
			matrix[i][j] = rand() % 91 + 10;
			
				out[k] += matrix[i][j];
			
		}
		 k++; 
	}

	cout << "\n=====================\n";
	for (int i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << matrix[i][j] << "   ";
		}
		cout << endl;
	}
	cout << "\n=====================\n";
	for (int i = 0; i < k; i++)
	{
		cout << out[i] << "   ";
	}
	int max = 0, number;
	for (int i = 0; i < k; i++)
	{
		if (max < out[i])
		{
			max = out[i];
		}	
		if (max == out[i])
		{
			number = i+1;
		}
	}

	cout << "\nmax sum is: " << max << endl;
	cout << "number of line is: " << number << endl;

	for (int i = 0; i < m; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix, out;

	_getch();
	return 0;
}
