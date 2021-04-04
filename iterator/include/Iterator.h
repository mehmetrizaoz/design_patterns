#ifndef ITERATOR_H
#define ITERATOR_H

class Iterator {
public:
   Iterator();
   virtual bool hasNext()=0;
   virtual void *next()=0;
};

#endif