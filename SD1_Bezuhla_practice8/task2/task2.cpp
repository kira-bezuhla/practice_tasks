#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
  
    int  count=0;
    ifstream f;
    f.open("C:\\Users\\rodle\\source\\repos\\SD1_Bezuhla_practice8\\input_data.txt");
    if (!f.is_open())
    {
        cout << "file open error" << endl;

    }
    else
    {
        string str;
        while (!f.eof())
        {
            str = "";
            getline(f, str);
            cout << str << endl;
            count++;
        }
    }
    cout << "Amount: " << count<<endl;
   
    f.close();
    system("pause");
    return 0;
}