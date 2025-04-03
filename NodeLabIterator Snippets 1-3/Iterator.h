#pragma once
#include "header.h"

class Iterator
{
private:
	NodeClass* position;
	List* container;
public:
	Iterator();

	friend class List;
};

