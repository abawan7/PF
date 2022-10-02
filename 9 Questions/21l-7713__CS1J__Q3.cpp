#include <iostream>
using namespace std;

int main() {
	int days, year, month, day;
	cout << "Enter The Number Of Days: ";
	cin >> days;
	year = days / 365;
	days = days % 365;
	month = days / 30;
	day = days % 30;
	cout << "It is " << year << " Years " << month << " Months " << day << " Days." << endl;
	return 0;
}