#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	double daysStayed;
	double roomCharge = 120;
	double internetCharge = 9.99;
	double totalBill;

	cout << "What is your name?";
	cin >> name;
	cout << "How many days did you stay.";
	cin >> daysStayed;

	totalBill = daysStayed * roomCharge + daysStayed * internetCharge;

	cout << name << ", your total for your stay is " << totalBill << " and thank you for your stay!" << endl;

	system("pause");
	return 0;
}