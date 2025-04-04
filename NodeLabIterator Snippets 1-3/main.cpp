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

	iter.previous();
	iter.previous();
	iter.previous();
	ageList.insert(iter, 7);
	ageList.displayList();

	iter = ageList.begin();
	iter.next();
	ageList.insert(iter, -1);
	ageList.displayList();

	iter.previous();
	
	Iterator iter2 = ageList.begin();
	iter2.next();
	
	if (iter.equals(iter2)) {
		cout << endl;
		cout << "They are equal!!\n";
	}
	else {
		cout << "They are not equal!!\n";
	}

	return 0;
}