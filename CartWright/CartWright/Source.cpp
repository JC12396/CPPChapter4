#include <iostream>
using namespace std;

int main()
{
	double grossPay;
	double FT = .20;
	double MT = .08;
	double ST = .04;
	double netPay1;
	double netPay2;
	double netPay3;

	cout << "What was the empolyee's gross pay? >> ";
	cin >> grossPay;

	netPay1 = (grossPay)-(grossPay * .20);
	netPay2 = (netPay1)-(netPay1 * .08);
	netPay3 = (netPay2)-(netPay2 * .04);

	cout << "The employee's net pay is $" << netPay3 << endl;

	system("pause");
	return 0;


}