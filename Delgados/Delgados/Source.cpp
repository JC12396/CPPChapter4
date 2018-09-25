#include <iostream>
#include <string>
using namespace std;

int main()
{
	string choice;
	double wantTacos = 0;
	double wantBurritos = 0;
	double wantChipsAndSalsa = 0;
	double wantYellowRice = 0;
	double wantMiniTacos = 0;

	do {
		cout << "What would you like to order?\nTacos\nBurritos\nChips\nMini Tacos\nYellow Rice\n>>  ";
		cin >> choice;
		if (choice == "Tacos" || "tacos")
		{
			cout << "How many tacos would you like? >> ";
			cin >> wantTacos;
		}
		else if (choice == "chips" || "Chips")
		{
			cout << "How much chips and salsa would you like? >> ";
			cin >> wantChipsAndSalsa;
		}
		else if (choice == "burritos" || "Burritos")
		{
			cout << "How many burritos would you like? >> ";
			cin >> wantBurritos;
		}
		else if (choice == "Mini Tacos" || "mini tacos" || "Mini tacos" || "mini Tacos")
		{
			cout << "How many mini tacos would you like? >> ";
			cin >> wantMiniTacos;
		}
		else if (choice == "Yellow Rice" || "yellow rice" || "Yellow rice" || "yellow Rice")
		{
			cout << "How much rice would you like? >> ";
			cin >> wantBurritos;
		}
	} while (choice == "Yellow Rice" || "yellow rice" || "Yellow rice" || "yellow Rice" || "Mini Tacos" || "mini tacos" || "Mini tacos" || "mini Tacos" || "burritos" || "Burritos" || "Tacos" || "tacos" || "chips" || "Chips");
	
	total(wantTacos, wantBurritos, wantYellowRice, wantChipsAndSalsa, wantMiniTacos);

	system("pause");
	return 0;
}

int truck()
{
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

	return 0;
}

int total(int wantTacos, int wantBurritos, int wantYellowRice, int wantChipsAndSalsa, int wantMiniTacos) {
	double totalAndTax;
	double total;
	double priceTacos = 3.00;
	double priceBurritos = 3.50;
	double priceChipsAndSalsa = 2.50;
	double priceYellowRice = 1.50;
	double priceMiniTacos = 1.60;
	total = (wantTacos * priceTacos) + (wantBurritos * priceBurritos) + (wantYellowRice * priceYellowRice) + (wantChipsAndSalsa * priceChipsAndSalsa) + (wantMiniTacos * priceMiniTacos);
	totalAndTax = total + (total * .07);


	return totalAndTax;

}