#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
	int m, n, i, j;
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
		
		for (j = 0; j < n; j++)
		{
			cout << "input int number ( " << i +1 << " line " << j+1 << " column): ";
			cin>>matrix[i][j];
			
		}
		cout << endl;
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

	for (int i = 0; i < m; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix, out;

	_getch();
	return 0;
}
