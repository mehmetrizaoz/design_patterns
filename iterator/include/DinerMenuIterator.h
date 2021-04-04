#ifndef DINER_MENU_ITERATOR_H
#define DINER_MENU_ITERATOR_H

#include "Iterator.h"
#include "MenuItem.h"
#include <deque>

class DinerMenuIterator : public Iterator {
public:
	deque<MenuItem> items;
	int position = 0;
 
	DinerMenuIterator(deque<MenuItem> items);
	void *next();
	bool hasNext();
};

#endif