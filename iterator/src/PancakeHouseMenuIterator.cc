#include "PancakeHouseMenuIterator.h"

PancakeHouseMenuIterator::PancakeHouseMenuIterator(vector<MenuItem> items) {
    this->items = items;
}

void *PancakeHouseMenuIterator::next() {
   return &(items[position++]);
}

bool PancakeHouseMenuIterator::hasNext() {
    if (position >= items.size()) {
        return false;
    } else {
        return true;
    }
}