#ifndef DINER_MENU_ITERATOR_H
#define DINER_MENU_ITERATOR_H

#include "Iterator.h"
#include "MenuItem.h"
#include <vector>

class DinerMenuIterator : public Iterator {
public:
	vector<MenuItem> items;
	int position = 0;
 
	DinerMenuIterator(vector<MenuItem> items);
	void *next();
	bool hasNext();
};

#endif