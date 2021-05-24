#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int mas[20];
	int i_Min = 0, i_Max = 0;
	for (int i = 0; i < 20; i++)
	{
		mas[i] = rand() % 100;
		cout << "mas[" << i << "] =" << mas[i] << endl;
	}


	for (int i = 1; i < 20; i++)
	{
		if (mas[i] < mas[i_Min]) {
			i_Min = i;
		}
		if (mas[i] > mas[i_Max]) {
			i_Max = i;
		}
	}
	cout << "\nindex of max is: " << i_Max << endl;
	cout << "max = " << mas[i_Max] << endl;
	cout << "index of min is: " << i_Min << endl;
	cout << "min = " << mas[i_Min] << endl;

	_getch();
	return 0;
}