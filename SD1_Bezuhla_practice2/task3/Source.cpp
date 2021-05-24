#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
#define STOP 0
int main()
{
	int n, sum = 0;
	cout << "This program is for \nsearching sum of your \nnumbers" << endl;
	cout << "input n: ";
	cin >> n;
	while (n != STOP)
	{
		sum += n;
		cin >> n;
	}
	cout << "\nsum is: " << sum << endl;
	_getch();
	return 0;
}