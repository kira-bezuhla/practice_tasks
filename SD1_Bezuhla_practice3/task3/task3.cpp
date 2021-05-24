#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	srand(50);
	const int n = 50;
	int mas[n];
	int m, i = 0;

	while (i != 50)
	{
		m = rand() % 99 + 1;
		if (m % 2 != 0)
		{
			mas[i] = m;
			i++;
		}
	}


	for (int i = 0; i < n; i++)
	{

		cout << "mas[" << i << "] = " << mas[i] << endl;
	}

	_getch();
	return 0;
}

