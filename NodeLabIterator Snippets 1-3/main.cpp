#include "header.h"

int main() {
	List ageList;

	ageList.push_back(10);
	ageList.push_back(20);
	ageList.push_back(42);
	ageList.displayList();

	Iterator iter = ageList.begin();

	ageList.insert(iter, 5);
	ageList.displayList();

	iter = ageList.end();
	ageList.insert(iter, 142);
	ageList.displayList();

	iter = ageList.begin();
	iter = ageList.erase(iter);
	ageList.displayList();

	return 0;
}