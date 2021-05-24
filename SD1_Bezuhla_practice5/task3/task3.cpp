#include <iostream>

using namespace std;
#define STOP '*'
int main()
{
	const int n = 100;
	char mas[n];
	char k;
	int i = 0,m=0;
	cout << "input symbols one by one\nor * to finish" << endl;
	cin >> k;
	while(k!=STOP)
	{

		mas[i] = k;
		i++;
		m++;
		cin >> k;
	}
	cout << "here is symbols" << endl;
	for (int i = 0; i < m; i++)
	{
		 
		cout << mas[i] << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}