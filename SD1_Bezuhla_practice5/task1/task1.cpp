#include <iostream>

using namespace std;

int main()
{
	char mas[100];
	cout << "input surname: ";
	cin >> mas;
	int n = 0, j;
	for (n = 0; mas[n]; n++);
	cout << "\nhere is " << n << " letters" << endl;

	for (int i = 0; i < n; i++)
	{
		if ((mas[i] == 'a') || (mas[i] == 'o'))
		{
			for (j = i; j < n - 1; j++)
			{
				mas[j] = mas[j + 1];
			}

			mas[j] = 0;
			n--;
			i--;

		}
	}
	cout << "\nsurname without letters 'a' and 'o': " << mas << endl;

	system("pause");
	return 0;
}