#include <iostream>
#include <string>
using namespace std;

double function( double temp)
{
	double celcius;
	celcius = (temp - 32) * .5556;
	return celcius;
}

int main()
{
	int time1F;
	int time2F;
	int time3F;
	double celcius;

	cout << "At 8:00AM what was the degrees in fahrenheit?";
	cin >> time1F;
	cout << "At 12:00PM what was the degrees in fahrenheit?";
	cin >> time2F;
	cout << "At 5:00PM what was the degrees in fahrenheit?";
	cin >> time3F;

	celcius = function(time1F);
	cout << "The temperature at 8:00AM in Celcius was " << celcius << endl;
	celcius = function(time2F);
	cout << "The temperature at 12:00PM in Celcius was " << celcius << endl;
	celcius = function(time3F);
	cout << "The temperature at 5:00PM in Celcius was " << celcius << endl;

	system("pause");
	return 0;
}


