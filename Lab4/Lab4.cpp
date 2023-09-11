#include <iostream>
#include <string>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int num;
	cout << "Factorial: "<<endl<<"Enter a number to compute the factorial of: ";
	cin >> num;
	if (num <= 0) {
		cout << "Nice try. Please enter a POSITIVE number: ";
		cin >> num;
	}
	int factorial = 1;
	string print = "";
	for (int i = 1; i <= num; i++) {
		factorial = factorial * i;
		if (i == num) {
			print = print + to_string(i);
		}
		else {
			print = print + to_string(i) + " * ";
		}
	}
	cout <<num<<"! = "<<print<<" = "<<factorial<< endl;
}
void arithmetic() {
	int stNum;
	int diff;
	int terms;
	cout << "Arithmetic: " << endl;
	cout << "Enter a number to start at: ";
	cin >> stNum;
	cout << "Enter a number to add each time: ";
	cin >> diff;
	cout << "Enter a number of elements in the series: ";
	cin >> terms;
	int sum = 0;
	string print = "";
	for (int i = 0; i < terms; i++) {
		sum = sum + stNum;
		if (i == terms - 1) {
			print = print + to_string(stNum);
		}
		else {
			print = print + to_string(stNum) + " + ";
		}
		stNum = stNum + diff;
	}
	cout << print << " = " << sum << endl;
}
void geometric() {
	int stNum;
	int	diff;
	int terms;
	cout << "Geometric: " << endl;
	cout << "Enter a number to start at: ";
	cin	 >> stNum;
	cout << "Enter a number to multiply each time: ";
	cin	 >> diff;
	cout << "Enter a number of elements in the series: ";
	cin	 >> terms;
	int sum = 0;
	string print = "";
	for (int i = 0; i < terms; i++) {
		sum = sum + stNum;
		if (i == terms - 1) {
			print = print + to_string(stNum);
		}
		else {
			print = print + to_string(stNum) + " + ";
		}
		stNum = stNum * diff;
	}
	cout << print << " = " << sum << endl;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}