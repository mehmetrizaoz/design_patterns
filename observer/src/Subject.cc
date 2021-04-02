#include "Subject.h"
#include "Observer.h"

class Observer;

void Subject::registerObserver(Observer *o){
   performRegisterObserver(o);
}

void Subject::removeObserver(Observer *o){
   performRemoveObserver(o);
}

void Subject::notifyObservers(){
   performNotifyObservers();
}


