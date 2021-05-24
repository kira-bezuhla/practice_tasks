#include <iostream>
#include <string>
using namespace std;
class Children
{
private:
	string name, surname;
	int age;
public:


	Children()
	{
		//Children child;
		cout << "input name: ";
		cin >> name;
		cout << "\nsurname: ";
		cin >> surname;
		cout << "\nage: ";
		cin >> age;
		cout << endl;
	}
	Children(string name, string surname, int age)
	{
		this->name = name;
		this->surname = surname;
		this->age = age;
	}

	string setName(string _name)
	{
		name = _name;
	}
	string getName()
	{
		return name;
	}

	string setSurname(string _surname)
	{
		surname = _surname;
	}
	string getSurname()
	{
		return surname;
	}

	int setAge(double _age)
	{
		age = _age;
	}
	int getAge()
	{
		return age;
	}

	void OutputData(Children child)
	{
		cout << "\n=======================";
		cout << "\nchild: " << child.name << " " << child.surname << endl;
		cout << "age: " << child.age << endl;
}
};

int main()
{
	Children child1;
	Children child2("Jony", "Chudakulli", 12);

	

	child1.OutputData(child1);
	child2.OutputData(child2); 

	system("pause");
	return 0;
}