#include <iostream>
#include <fstream>

using namespace std;

struct Student 
{
	char name[20];
	char surname[20];
	int math;
	int phys;
	int inform;
	float average;
};

int main()
{
	int n = 0;
	float rem = 0;
	Student* List;
	ifstream file("C:\\Users\\rodle\\source\\repos\\SD1_Bezuhla_practice6\\input_data.txt");
	if (!file)
	{
		cout << "mistake with open file";
		return 0;
	}
	file >> n;
	cout << n << endl;
	List = new Student[n];
	for (int i = 0; i < n; i++)
	{
		file >> List[i].surname >> List[i].name >> List[i].math >> List[i].phys >> List[i].inform;
		cout << List[i].surname << "  " << List[i].name << "  " << List[i].math << "  " << List[i].phys << "  " << List[i].inform << endl;
		List[i].average = ((float(List[i].math)) + ((float)List[i].phys) + (float(List[i].inform))) / 3;
		if (rem < List[i].average)
		{
			rem = List[i].average;
		}
	}
	cout << "\n\nmost succesful student/s:" << endl;
	for (int i = 0; i < n; i++)
	{
		if (List[i].average == rem)
		{
			cout << List[i].surname<<"   " << List[i].name<<endl;
		}
	}

	file.close();
	system("pause");
	return 0;
}