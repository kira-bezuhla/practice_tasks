
#include <iostream>
#include <fstream>

using namespace std;

struct Flat 
{
	char name[20];
	char city[20];
	int rooms;
	int cost;
	
};

int main()
{
	int n = 0;
	
	Flat* List;
	ifstream file("C:\\Users\\rodle\\source\\repos\\SD1_Bezuhla_practice6\\flats.txt");
	if (!file)
	{
		cout << "mistake with open file";
		return 0;
	}
	file >> n;
	cout << n << endl;
	List = new Flat[n];
	for (int i = 0; i < n; i++)
	{
		file >>  List[i].name >> List[i].city >> List[i].rooms >> List[i].cost;
		cout <<  List[i].name << "  " << List[i].city << "  " << List[i].rooms << "  " << List[i].cost << endl;
		
	}
	

	file.close();
	system("pause");
	return 0;
}