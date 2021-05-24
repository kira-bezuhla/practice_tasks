#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double m, n, NSD;

	cout << "This program is for searching NSD " << endl;

	cout << "input first number ";
	cin>> m;
	cout << "\ninput second number ";
	cin >> n;
	cout << endl << "searching.." << endl;

	while (m != n)
	{
		if (m > n)
		{
			m = m - n;
		}
		else
		{
			n = n - m;
		}
	}
	NSD = n;
	cout << "NSD is: " << NSD << endl;
	_getch();
	return 0;
}