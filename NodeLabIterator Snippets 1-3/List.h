#pragma once
#include "header.h"

class List {
private:
	NodeClass* first;
	NodeClass* last;
public:
	List();
	void push_back(int age);
	void insert(Iterator iter,int age);
	Iterator erase(Iterator iter);
	Iterator begin();
	Iterator end();
	void displayList();

	friend class Iterator;
};
