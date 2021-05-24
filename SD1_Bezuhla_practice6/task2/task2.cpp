#include <iostream>
#include <fstream>

using namespace std;

struct TimyWimy
{
	int hour;
	int min;
	int sec;
};
void IsCorrect(TimyWimy, bool&);
int main()
{
	TimyWimy time1;
	TimyWimy time2;
	TimyWimy time3;
	bool prap1 = true, prap2 = true;
	cout << "input first time (hours:minutes:seconds): ";
	cin >> time1.hour >> time1.min >> time1.sec;
	IsCorrect(time1, prap1);
	cout << "input second time (hours:minutes:seconds): ";
	cin >> time2.hour >> time2.min >> time2.sec;
	IsCorrect(time2, prap2);
	

	if (prap1&& prap2 )
	{
		cout << "cool"<<endl<<endl;
		time3.sec = (time1.sec + time2.sec) % 60;
		int addmin = 0;
		addmin = (time1.sec + time2.sec) / 60;
		
		time3.min= (time1.min + time2.min+addmin) % 60;
		int addhour=0;
		addhour = (time1.min + time2.min + addmin) / 60;

		time3.hour = (time1.hour + time2.hour+addhour) % 24;

		cout << "time is: " << time3.hour << ":" << time3.min << ":" << time3.sec << endl;
	}
	else
	{
		if (prap1 ||prap2 )
		{
			cout << "check your mistakes in time" << endl;
		}
	}

	system("pause");
	return 0;
}
void IsCorrect(TimyWimy time, bool& prap)
{
	if (time.hour > 24)
	{
		cout << "we have only 24 hours in a day" << endl;
	}
	else
	{
		if (time.min > 59)
		{
			cout << "we have only 60 minutes in a hour" << endl;
		}
		else
		{
			if (time.sec > 59)
			{
				cout << "we have only 60 seconds in a minute" << endl;
			}
		}
	}
	prap = false;
	
}