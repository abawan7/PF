//Name: Abdullah Awan
//Email: l217713@lhr.nu.edu.pk

#include <iostream>
using namespace std;

// Account Info Function
void info(string& name, int& balance, int& id, string& account_type) {
	cout << "\nName: " << name << endl;
	cout << "ID: " << id << endl;
	cout << "Balance: " << balance << endl;
	cout << "Account Type: " << account_type << endl;
}
//Balance Function
void Balance(int& balance) {
	cout << "\nYour Current Balance Is: " << balance << endl;
	if (balance < 1000) {
		cout << "Low Balance" << endl;
	}
}
//Deposit Function
void Deposit(int& balance) {
	int deposit;
	for (int i = 1; i <= 2; i++) {
		cout << "\nEnter Deposit Amount: ";
		cin >> deposit;
		if (deposit > 0) {
			balance = balance + deposit;
			cout << "\nYour Balance Is Now: " << balance << endl;
			break;
		}
		else {
			cout << "Invalid Amount" << endl;
		}
	}
}
//Withdraw Function
void Withdraw(int& balance) {
	int withdraw;
	for (int i = 0; i <= 2; i++) {
		cout << "\nEnter Amount To Withdraw (Mulitple of 500): ";
		cin >> withdraw;
		if (withdraw % 500 == 0) {
			if (withdraw > balance) {
				cout << "\nInsufficient Balance" << endl;
				cout << "Try Again" << endl;
			}
			else {
				if (withdraw > 3999 && withdraw < 5999) {
					balance -= (withdraw * 1.053);
				}
				else if (withdraw > 5999 && withdraw < 9999) {
					balance -= (withdraw * 1.068);
				}
				else if (withdraw > 9999) {
					balance -= (withdraw * 1.084);
				}
				else {
					balance -= withdraw;
				}
				cout << "\nYour Balance Is Now: " << balance << endl;
				break;
			}
		}
		else {
			cout << "\nInvalid Amount Enter (Multiple of 500)\nTry Again" << endl;
		}
	}

}
//Exit Function
void Exit() {
	char choose;
	cout << "Thanks For Using Fast Banking System\n" << endl;
	cout << "Enter Q to Quit or E to Exist: ";
	cin >> choose;
	if (choose == 'q' || choose == 'Q') {
		cout << "\nTumhara Grade Pakka Hai " << endl;
	}
	else if (choose == 'e' || choose == 'E') {
		cout << "\nKanjoos Insaan " << endl;
	}
}

int main() {
	string name, account_type = "Saving";
	int option, balance = 25000;
	cout << "Enter Name: ";
	cin >> name;

	//To Produce New ID
	srand(time(NULL));
	int id = rand();
	//Asking user What He Want to Do!
	cout << "\n1. Addition Info\n2. Balance\n3. Deposit\n4. Withdraw\n5. Exit\n" << endl;
	cout << "What Do You Want To Do: ";
	cin >> option;

	if (option == 1) {
		//Calling Account Info Function
		info(name, balance, id, account_type);
	}

	if (option == 2) {
		//Calling Balance Function
		Balance(balance);
	}

	if (option == 3) {
		//Calling Deposit Function
		Deposit(balance);
	}

	if (option == 4) {
		//Calling Wihtdraw Function
		Withdraw(balance);
	}

	if (option == 5) {
		//Calling Exit Function
		Exit();
		return 0;
	}
}