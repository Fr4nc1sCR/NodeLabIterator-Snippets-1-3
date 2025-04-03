#pragma once
#include "header.h"

class NodeClass
{
private:
	int age;
	NodeClass* next;
	NodeClass* previous;
public:
	NodeClass(int age);

	friend class List;
	friend class Iterator;
};

