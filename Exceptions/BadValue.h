#pragma once
#include "header.h"

class BadValue
{
private:
	string errorMessage;
	int errorValue;
public:
	BadValue(string errormsg, int errorVal) {
		errorMessage = errormsg;
		errorValue = errorVal;
	}

	string getErrorMessage() { return errorMessage; }
	int getErrorValue() { return errorValue; }

	string toString() {
		return string("Error!" + errorMessage + ", value = " + to_string(errorValue));
	}
};

