#include <iostream>
#include <string>
using namespace std;
class Tiles
{
public:
	string brand;
	double size_h;
	double size_w;
	double cost;

	Tiles()
	{
		
		cout << "input name of brand: ";
		cin >> brand;
		cout << "\nsize (high:waist): ";
		cin >> size_h >> size_w;
		cout << "\ncost: ";
		cin >> cost;
		cout << endl;
	}
	Tiles(string brand, double size_h, double size_w, double cost)
	{
		this->brand = brand;
		this->size_h = size_h;
		this->size_w = size_w;
		this->cost = cost;
	}

	string setBrand(string _brand)
	{
		brand = _brand;
	}
	string getBrand()
	{
		return brand;
	}

	double setSize_h(double _size_h)
	{
		size_h = _size_h;
	}
	double getSize_h()
	{
		return size_h;
	}

	double setSize_w(double _size_w)
	{
		size_w = _size_w;
	}
	double getSize_w()
	{
		return size_w;
	}

	double setCost(double _cost)
	{
		cost = _cost;
	}
	double getCost()
	{
		return cost;
	}

	void getData(Tiles tile)
	{
		cout << "name of brand: " << tile.brand << endl;
		
		cout << "size (high:waist): " << tile.size_h << ":" << tile.size_w << endl;
		
		cout << "cost: " << tile.cost << endl;
		
		cout << endl;
	}
};

int main()
{
	Tiles* list[4];
	list[0] =  new Tiles("ministika", 3.5, 2.7, 50);
	list[1] = new Tiles("rowezba", 5.5, 4.7, 75.5);
	list[2] = new Tiles();
	list[3] = new Tiles();


	for (int i = 0; i < 4; i++)
	{
		list[i]->getData(*list[i]);
	}
	system("pause");
	return 0;
}