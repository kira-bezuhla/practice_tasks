#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(0, "ukr");
    int i, n;
    double a;
    ofstream f;
    f.open("C:\\Users\\rodle\\source\\repos\\SD1_Bezuhla_practice8\\input_data.txt", ios::out);
    cout << "n = "; cin >> n;
    if (!f.is_open())
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
            f << a << "\t";
        }
    }
    f.close();
    system("pause");
    return 0;
}