#include "header.h"

void likeSnippet5() {
	string name;

	try {
		cout << "Asking for a name (for a friend): ";
		cin >> name;

		if (name.length() < 3) {
			throw string("You cretin! Are you from Arkansas?");
		}
		else {
			cout << "What a nice person you are!\n\n";
		}
	}
	catch (string& s) {
		cout << "ERRROR!!! " << s << endl;
	};
}

int throwBack() {
	int value;
	cout << "Enter a value (not multiple of 3): \n\n";
	cin >> value;

	if (value % 3 == 0) {
		throw string(to_string(value) + " ?? I said no multiples of 3 you Cyclops\n");
	}

	cout << "Nice number! \n";

	return value;
}

void likeSnippet6() {
	int number;

	try {
		number = throwBack();
		cout << "Cyclops Poliphomes Approves, you may pass!\n";
	}
	catch (string& s) {
		cout << "The number was not approved." << endl;
		cout << "Returned status was " << s << endl
		     << "The number " << number << "was eaten by the cyclops! (very gory)\n";
	}
	
}

void throwRunTime() {

	int number;

	try {
		cout << "Enter an integer: ";
		cin >> number;

		if (number < 0) {
			throw runtime_error("Error: The value entered is less than 0!\n\n");
		}
	}
	catch (runtime_error& excpt) {
		cout << "The number entered was: " << number << endl;
		cout << "Exception caught: " << excpt.what() << endl;
	}
}

void badValue() {
	int val;

	try {
		cout << "Enter num: ";
		cin >> val;

		if (val < 0) {
			throw BadValue("Value less than zero!", val);
		}
		cout << "Nice number! " << val << endl;
	}
	catch (BadValue bv) {
		cout << bv.toString() << endl;
	}
}

int getPenguinAge() {
	int penguinAge;

	cout << "Enter the age of the penguin: ";
	cin >> penguinAge;

	if (penguinAge < 0) {
		throw runtime_error("Pre-born penguins are not valid.\n\n");
	}
	else if (penguinAge > 40) {
		throw runtime_error("Penguins live for a maximum of 40 years.\n\n");
	}

	return penguinAge;
}

void testPenguins() {
	int age;
	try {
		age = getPenguinAge();
		cout << "This penguin has valid age: " << age << endl;
	}
	catch (runtime_error& excpt) {
		cout << "Error, status is: " << excpt.what() << endl;
	}
}