#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(0, "ukr");
	int i, n;
	int a;
	ofstream fout, fout2;
	ifstream fin;
	fout.open("s1.txt");
	cout << "n = "; cin >> n;
	cout << endl;
	if (!fout.is_open())
	{
		cout << "file open error" << endl;

	}
	else
	{
		for (i = 0; i < n; i++)
		{
			cout << "a = ";
			//ввод числа
			cin >> a;
			fout << a << "\n";
		}
	}
	cout << endl << endl;
	fout.close();
	fin.open("s1.txt");
	fout2.open("s2.txt");
	if (!fin.is_open() && !fout2.is_open())
	{
		cout << "file open error" << endl;

	}
	else
	{
		int ch;
		int in = 0;
		while (fin >> ch)
		{
			in = ch + 3;
			fout2 << in << endl;
		}
	}


	fin.close();
	fout2.close();
	system("pause");
	return 0;
}