//Abdullah Awan  Roll # 21L-7713
//Email: l217713@lhr.nu.edu.pk

#include <iostream>
using namespace std;

void insert(int arr[]) {
	int elem;
	//Asking User The Number He Want To Insert In Array
	cout << "Enter element to insert in Array: ";
	cin >> elem;
	/*Inserting The User Value Where Index Value Is Equal to 0 Because In question1 function we Set All the Index
	Value to -9129312*/
	for (int i = 0; i < 20; i++) {
		if (arr[i] == -9129312) {
			arr[i] = elem;
			break;
		}
		//If The Array Is Full	
		else {
			cout << "Array Is Full" << endl;
		}
	}
	//Rearraging the Array Value to Ascending Order
	for (int i = 0; i < 20; i++) {
		for (int j = i + 1; j < 20; j++) {
			if (arr[j] < arr[i]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	//Printing the Array
	cout << "New Array In Ascending Order " << endl;
	for (int i = 0; i < 20; i++) {
		if (arr[i] != -9129312) {
			cout << " " << arr[i];
		}
	}
	cout << endl;
}

void update(int arr[]) {
	int update, replace;
	//Asking User What Value You Want To Replace!
	cout << "Enter Value You Want To Replace: ";
	cin >> replace;
	//Asking User New Value!
	cout << "Enter New Value: ";
	cin >> update;
	//Loop For Replacing The Value
	for (int i = 0; i <= 20; i++) {
		if (arr[i] == replace) {
			arr[i] = update;
		}
	}
	//Printing the Array
	for (int i = 0; i < 20; i++) {
		if (arr[i] != -9129312) {
			cout << " " << arr[i];
		}
	}
	cout << endl;
}

void Delete(int arr[]) {
	int del;
	//Asking User To Enter The Value He Want To Delete
	cout << "Enter Value You Want To Delete: ";
	cin >> del;
	//Loop For Setting the Value User Enter To -9129312
	for (int i = 0; i < 20; i++) {
		if (arr[i] == del) {
			arr[i] = -9129312;
		}
	}
	//Printing the Array
	for (int i = 0; i < 20; i++) {
		if (arr[i] != -9129312) {
			cout << " " << arr[i];
		}
	}
	cout << endl;
}
int question1() {
	int arr[20], n;
	//Loop For Setting All The Values of Array Index From Trash To -9129312
	for (int i = 0; i < 20; i++) {
		arr[i] = -9129312;
	}
	//Infinite Loop Until User Press Q To Quit!
	while (true) {
		char select;
		cout << "Press I to insert, U to update, D to delete or Q to Quit: ";
		cin >> select;
		if (select == 'i' || select == 'I') {
			//Calling Insert Function
			insert(arr);
		}
		if (select == 'u' || select == 'U') {
			//Calling Upate Function
			update(arr);
		}
		if (select == 'd' || select == 'D') {
			//Calling Delete Function
			Delete(arr);
		}
		if (select == 'q' || select == 'Q') {
			cout << "-------------------------------------------" << endl;
			break;
		}
	}
	return 0;

}

void Intersection(int arr1[], int arr2[]) {
	cout << "Intersection Of Array Is: ";
	// Print all the elements that are in array2 but not in array1
	for (int j = 0; j < 10; j++)
	{
		bool flag = false;
		for (int i = 0; i < 10; i++)
		{
			if (arr1[i] == arr2[j])
			{
				flag = true;
				break;
			}
		}
		// flag==true means element of array2 is present in array1
		if (flag == true)
		{
			cout << arr2[j] << " ";
		}
	}
	cout << endl;
}

void Union(int arr1[], int arr2[]) {
	cout << "Union Of Array Is: ";
	// Print all the elements that are in array1
	for (int i = 0; i < 10; i++)
	{
		cout << arr1[i] << " ";
	}
	// Print all the elements that are in array2 but not in array1
	for (int j = 0; j < 10; j++)
	{
		bool flag = false;
		for (int i = 0; i < 10; i++)
		{
			if (arr1[i] == arr2[j])
			{
				flag = true;
				break;
			}
		}
		// flag!=true means element of array2 is not present in array1
		if (flag != true)
		{
			cout << arr2[j] << " ";
		}
	}
	cout << endl;
}

int question2() {
	int arr1[10];
	int arr2[10];
	while (true) {
		//Asking User 10 Values of Array 1
		for (int i = 0; i < 10; i++)
		{
			cout << "Enter " << i << " Index Of Array 1: ";
			cin >> arr1[i];
		}
		//Asking User 10 Values of Array 2
		for (int i = 0; i < 10; i++)
		{
			cout << "Enter " << i << " Index Of Array 2: ";
			cin >> arr2[i];
		}
		//Calling Union Function
		cout << "-------------------------------------------" << endl;
		Union(arr1, arr2);
		Intersection(arr1, arr2);
		cout << "-------------------------------------------" << endl;
		char n1;
		cout << "Press Q To Quit (Question 2) || Press C To Continue (Quesiton 2): ";
		cin >> n1;
		if (n1 == 'q' || n1 == 'Q') {
			break;
		}
		else if (n1 == 'C' || n1 == 'c') {
			continue;
		}
	}
	cout << "-------------------------------------------" << endl;
	return 0;
}



int main() {
	int n;
	//Infinite Loop Until User Press 3 To Exit!
	while (true) {
		cout << "Press 1 for Question # 1 || Press 2 for Question 2 || 3 to Exit : ";
		cin >> n;
		if (n == 1) {
			//calling question1 Function
			question1();
		}
		if (n == 2) {
			//calling question2 Function
			question2();
		}
		if (n == 3) {
			cout << "-------------------------------------------" << endl;
			cout << "Thank You!" << endl;
			return 0;
		}
	}
}