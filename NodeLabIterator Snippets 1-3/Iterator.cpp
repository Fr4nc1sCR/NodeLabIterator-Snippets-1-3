#include "header.h"

Iterator::Iterator() {
	position = nullptr;
	container = nullptr;
}

int Iterator::get() const {
	return position->age;
}

void Iterator::next() {
	position = position->next;
}

void Iterator::previous() {
	if (position == nullptr){
		position = container->last;
	}
	else {
		position = position->previous;
	}
}

bool Iterator::equals(Iterator other) {
	return position == other.position;
}
