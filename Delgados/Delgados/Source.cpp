#include <iostream>
using namespace std;

int main()
{
	int wantTacos;
	int wantBurritos;
	int wantChipsAndSalsa;
	int wantYellowRice;
	int wantMiniTacos;
	double priceTacos = 3.00;
	double priceBurritos = 3.50;
	double priceChipsAndSalsa = 2.50;
	double priceYellowRice = 1.50;
	double priceMiniTacos = 1.60;
	double total;
	double totalAndTax;

	cout << "How many tacos would you like?";
	cin >> wantTacos;
	cout << "How Chips and salsa would you like?";
	cin >> wantChipsAndSalsa;
	cout << "How many burritos would you like?";
	cin >> wantBurritos;
	cout << "How many mini tacos would you like?";
	cin >> wantMiniTacos;
	cout << "How much yellow rice would you like?";
	cin >> wantYellowRice;

	total = (wantTacos * priceTacos) + (wantBurritos * priceBurritos) + (wantYellowRice * priceYellowRice) + (wantChipsAndSalsa * priceChipsAndSalsa) + (wantMiniTacos * priceMiniTacos);
	totalAndTax = total + (total * .07);

	cout << "Your Total without tax is $" << total << " and with tax it is $" << totalAndTax << endl;
	cout << "                    XXXXXX" << endl;
	cout << "                XXXXXXXXXXXXXXX" << endl;
	cout << "              XXXXXXXXXXXXXXXXXXX" << endl;
	cout << "     XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
	cout << "     X                              X       X    " << endl;
	cout << "     X                              x       X    " << endl;
	cout << "     X                              XXXXXXXXX    " << endl;
	cout << "     X                                      X    " << endl;
	cout << "     X                                      X    " << endl;
	cout << "     X                                      X    " << endl;
	cout << "     XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX    " << endl;
	cout << "          XXXXXX               XXXXXXXX          " << endl;
	cout << "           XXXX                  XXXX             " << endl;

	system("pause");
	return 0;
}