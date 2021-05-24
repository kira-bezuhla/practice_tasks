#include<iostream>
#include<conio.h>

using namespace std;
template <typename T> void printArray(const T* array, int count)
{
	for (int i = 0; i < count; i++)
		cout << array[i] << " ";
	cout << endl;
}

int main()
{
	const int n = 10;
	int mas[n];
	double dob[n];
	int suma = 0;
	cout << "massiv:" << endl;
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 11;
		//cout << "mas[" << i << "] =" << mas[i] << endl;
	}
	for (int i = 0; i < n; i++)
	{
		dob[i] = rand() % 11;
		//cout << "mas[" << i << "] =" << mas[i] << endl;
	}
	cout << "massiv int" << endl;
	printArray<int>(mas, n);
	cout << "massiv double" << endl;
	printArray<double>(dob, n);
	for (int i = 0; i < n; i++)
	{

		if (mas[i] % 2 != 0)
		{
			suma += mas[i];
		}

	}
	cout << "sum of odd numbers (massiv int): " << suma << endl;
	_getch();
	return 0;
}