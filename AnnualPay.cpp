#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;


int main() {
	double payAmount;
	double payPeriods;
	double annualPay;

	payAmount = 2200.0;
	payPeriods = 26;
	annualPay = payAmount * payPeriods;
	cout << "Your total annual pay is: " << annualPay << endl;
	system("pause");
}


