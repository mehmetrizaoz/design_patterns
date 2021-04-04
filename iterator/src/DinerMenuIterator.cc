#include "DinerMenuIterator.h"

DinerMenuIterator::DinerMenuIterator(vector<MenuItem> items) {
    this->items = items;
}

void *DinerMenuIterator::next() {
    //MenuItem menuItem = items[position];
    //position++;
    return &(items[position++]);
}

bool DinerMenuIterator::hasNext() {
    if (items.begin() + position == items.end()) {
        return false;
    } else {
        return true;
    }
}
