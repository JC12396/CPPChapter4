#include <iostream>
using namespace std;

int main()
{
	int numOfBagels;
	int numOfDonuts;
	int numOfCoffee;
	double bagelPrice = .99;
	double donutPrice = .75;
	double coffeePrice = 1.20;
	double total;

	cout << "How many bagels were ordered? >>";
	cin >> numOfBagels;
	cout << "How many donuts were ordered? >>";
	cin >> numOfDonuts;
	cout << "How many coffees were ordered? >>";
	cin >> numOfCoffee;

	total = (numOfBagels * bagelPrice) + (numOfDonuts * donutPrice) + (numOfCoffee * coffeePrice);

	cout << "The total will be " << total << endl;

	system("pause");
	return 0;



}
