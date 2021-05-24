#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	const int n = 10;
	int mas[n];

	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 8 + 7;
		cout << "mas[" << i << "] =" << mas[i] << endl;
	}
	cout << "\nrebuilding...\n";
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 10) { mas[i] -= 10; }
	}
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "] =" << mas[i] << endl;
	}
	_getch();
	return 0;
}