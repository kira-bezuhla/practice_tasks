#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
	int m, n, i, j, c = 0, l = 0;
	cout << "making the matrix of dimension m x n\n\ninput m: ";
	cin >> m;
	cout << "input n: ";
	cin >> n;

	int** matrix = new int* [m];
	for (int i = 0; i < m; i++)
	{
		matrix[i] = new int[n];
	}

	int* sum_column = new int[m];
	int* sum_line = new int[m];


	srand((unsigned)time(NULL));

	for (int i = 0; i < m; i++)
	{
		sum_line[l] = 0;
		for (j = 0; j < n; j++)
		{
			cout << "input int number ( " << i + 1 << " line " << j + 1 << " column): ";
			cin >> matrix[i][j];
			sum_line[l] += matrix[i][j];
		}
		cout << endl;
		l++;
	}

	for (j = 0; j < n; j++)
	{
		sum_column[c] = 0;
		for (int i = 0; i < m; i++)
		{
			sum_column[c] += matrix[i][j];
		}
		c++;
	}
	//вывод на экран
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
	cout << "summ of line numbers\n";
	for (l = 0; l < m; l++)
	{
		cout << sum_line[l] << "   ";
	}
	cout << "\n=====================\n";
	cout << "summ of column numbers\n";
	for (c = 0; c < n; c++)
	{
		cout << sum_column[c] << "   ";
	}


	for (int i = 0; i < m; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix, sum_column, sum_line;

	_getch();
	return 0;
}
