#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int n, m;
	cout << "This program is for \nsearching first \n100 numbers which\nyou can divade entirely" << endl;
	cout << "\ninput divider" << endl;
	cin >> n;
	cout << "\nnumbers...\n";
	for (int i = 1; i < 101; i++)
	{
		m = i * n;
		cout << m<<endl;
	}
	_getch();
	return 0;
}