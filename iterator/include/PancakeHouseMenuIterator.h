#ifndef PANCAKE_HOUSE_MENU_ITERATOR_H
#define PANCAKE_HOUSE_MENU_ITERATOR_H

#include "MenuItem.h"
#include "Iterator.h"
#include <vector>

class PancakeHouseMenuIterator : public Iterator {
public:
	vector<MenuItem> items;
	int position = 0;
 
	PancakeHouseMenuIterator(vector<MenuItem> items);
	void *next(); 
	bool hasNext();
};

#endif