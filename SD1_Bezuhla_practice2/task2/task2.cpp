#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	for (int i = 0; i < 5; i++) {
		cout << "*" << setw(10);
	}
	_getch();
	return 0;
}