#include<iostream>
#include<conio.h>
#include<time.h>
#include<vector>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	const int n = 100;
	vector<int> mas;
	int m;
	cout << "massiv:" << endl;
	for (int i = 0; i < n; i++)
	{
		m = rand() % 201 - 100;
		mas.push_back(m);
		cout << "mas[" << i << "] =" << mas[i] << endl;
	}

	//vector<int>::iterator it;
	//for (it = mas.begin(); it != mas.end(); ++it)
	//{
	//	cout << *it << endl;
	//}

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		m = mas[i];
		if (m % 2 == 0)
		{
			sum += mas[i];
		}

	}
	cout << "\nsum is: " << sum << endl;

	_getch();
	return 0;
}