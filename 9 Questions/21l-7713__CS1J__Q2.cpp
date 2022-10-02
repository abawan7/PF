#include <iostream>
using namespace std;

int main() {
	int hourlywage, numberofhours, tax, per, netpay;
	cout << "Enter Hourly Wage: ";
	cin >> hourlywage;
	cout << "Enter Number of Hours: ";
	cin >> numberofhours;
	cout << "Enter Withholding Tax: ";
	cin >> tax;
	per = 100 - tax;
	netpay = ((hourlywage * numberofhours) * per) / 100;
	cout << "Net Pay is: " << netpay << endl;
	return 0;
}