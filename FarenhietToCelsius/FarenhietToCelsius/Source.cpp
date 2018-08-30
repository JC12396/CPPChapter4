#include <iostream>
#include <string>
using namespace std;

int main()
{
	int time1F;
	int time2F;
	int time3F;
	int time1C;
	int time2C;
	int time3C;

	cout << "At 8:00AM what was the degrees in fahrenheit?";
	cin >> time1F;
	cout << "At 12:00PM what was the degrees in fahrenheit?";
	cin >> time2F;
	cout << "At 5:00PM what was the degrees in fahrenheit?";
	cin >> time3F;

	time1C = (time1F - 32) * .5556;
	time2C = (time2F - 32) * .5556;
	time3C = (time3F - 32) * .5556;

	cout << "The temperature at 8:00AM in Celcius was " << time1C << endl;

	system("pause");
	return 0;
}