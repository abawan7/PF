#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "1. Calculate The Area Of Circle." << endl;
	cout << "2. Calculate The Area Of Rectangle." << endl;
	cout << "3. Calculate The Area Of Triangel." << endl;
	cout << "4. Quit." << endl;
	cout << "Enter Your Choice (1-4): ";
	cin >> a;
	if (a == 1) {
		float area, r;
		double pi = 3.14159;
		cout << "Enter Radius: ";
		cin >> r;
		area = pi * r * r;
		cout << "The Area of Circle is: " << area << endl;
	}
	else if (a == 2) {
		float area, length, width;
		cout << "Enter Length: ";
		cin >> length;
		cout << "Enter Width: ";
		cin >> width;
		area = length * width;
		cout << "The Area of Rectangle is: " << area << endl;
	}
	else if (a == 3) {
		float area, base, height;
		cout << "Enter Base: ";
		cin >> base;
		cout << "Enter Height: ";
		cin >> height;
		area = base * height * 0.05;
		cout << "The Area of Triangle is: " << area << endl;
	}
	else if (a == 4) {
		cout << "Program Ended" << endl;
	}
	else {
		cout << "Invalid Input" << endl;
	}
	return 0;
}