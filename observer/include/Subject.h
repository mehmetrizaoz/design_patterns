#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"

class Subject {
public:
   void registerObserver(Observer *o);
   void removeObserver(Observer *o);
   void notifyObservers();
private:
   virtual void performRegisterObserver(Observer *o)=0;
   virtual void performRemoveObserver(Observer *o)=0;
   virtual void performNotifyObservers()=0;  
};

#endif
