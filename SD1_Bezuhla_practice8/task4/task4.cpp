#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    setlocale(0, "ukr");
    string str;
    ofstream f;
    f.open("hello_university.txt");
    str = "hello university!";
    if (!f.is_open())
    {
        cout << "file open error" << endl;

    }
    else
    {
        f << str;
    }
    f.close();
    system("pause");
    return 0;
}