#include <iostream>
#include <string>
using namespace std;

int main()
{
	double balance = 2056.25;
	double checkAmount;
	double percentPutIn;
	double truPutIn;
	double bonus;
	double newBalance;

	cout << "Your balance right now is $" << balance << ". What was your check amount >> ";
	cin >> checkAmount;
	cout << "What percentage of your check would you like to put in >> ";
	cin >> percentPutIn;
	cout << "How much of your bonus would you like to put in >> ";
	cin >> bonus;

	truPutIn = checkAmount * percentPutIn;

	newBalance = balance + truPutIn + bonus;

	cout << "Your new balance is $" << newBalance << "." << endl;

	system("pause");
	return 0;
}