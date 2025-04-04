#pragma once
#include "header.h"

class Iterator
{
private:
	NodeClass* position;
	List* container;
public:
	Iterator();
	int get() const;
	void next();
	void previous();
	void equals(Iterator other);

	friend class List;
};

