#include <iostream>
#include <string>
using namespace std;

int main()
{
	int eggsWant;
	int eggsDozenWant;
	double eggPrice1 = 0.25;
	double eggPrice2 = 2.00;
	double eggTotal;

	cout << "There are 1 million eggs left. How many dozens of eggs would you like to buy?";
	cin >> eggsDozenWant;
	cout << "How many seperate of eggs would you like to buy?";
	cin >> eggsWant;

	eggTotal = (eggsDozenWant * eggPrice2) + (eggsWant * eggPrice1);

	cout << "Your total will be $" << eggTotal << ". Thank you." << endl;
	
	system("pause");
	return 0;
}
