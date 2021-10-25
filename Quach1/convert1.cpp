// File:      <Convert1>
// Name:      <Johnny Quach>
// Class:     <CSIS 252>
// Program:   <Assignment 1>
// Date:      <8/24/2021>

// Program Description
// This program will convert horse length to feet and vice versa

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	// Variables
	bool  hr_to_ft = true; // To check if true or false
	float hr, // Variable Horse Length
	      ft; // Variable Feet
	int  input_number = 1; // input number variables
	cout << fixed << showpoint <<  setprecision(2) <<endl; // Formatting the numbers to two decimal points

while (input_number == 1) {
	// To display options
	cout << "Choose from the following:" << endl
	     << "(1) Feet to Horse Length"<< endl
	     << "(2) Horse Length to feet"<< endl
	     << "Enter 1 or 2 to choose that option, then press ENTER " << endl;
	cin >> input_number;


	//Determines option chosen
	if (input_number == 1) {
		hr_to_ft = true;
	}
	else {
		hr_to_ft = false;
	};

	if (hr_to_ft) { //Converts the measurement of Feet into Horse Length
	cout << "Please enter the number of feet." << endl;
	cin >> ft;
	hr = ft / 8;
	cout << ft << " Feet is " << hr << " Horse Length" << endl;
	}
	else { // Converts the measurement of Horse Length into Feet
	cout << "Please enter the number of horse lengths:" << endl;
	cin >> hr;
	ft = hr * 8;
	cout << hr << " Horse length is " << ft << "Feet" << endl;
	};
 	//Loop used to determine if the user would like to convert again or exit
	cout << "Choose from the following:" << endl
	     << "(1) To convert again" << endl
	     << "(2) To exit" << endl
	     << "Enter 1 or 2 to choose that option, then press ENTER" << endl;
	cin >> input_number;
	};
return 0;
};
