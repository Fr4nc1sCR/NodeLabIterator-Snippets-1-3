#include "header.h"

int main() {

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
	catch (string s) {
		cout << "ERRROR!!! " << s << endl;
	};

	return 0;
}