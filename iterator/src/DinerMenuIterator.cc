#include "DinerMenuIterator.h"

DinerMenuIterator::DinerMenuIterator(deque<MenuItem> items) {
   this->items = items;
}

void *DinerMenuIterator::next() {
   return &(items[position++]);
}

bool DinerMenuIterator::hasNext() {
   if (items.begin() + position == items.end()) {
      return false;
   } else {
      return true;
   }
}
