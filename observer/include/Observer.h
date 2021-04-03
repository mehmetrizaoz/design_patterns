#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
   Observer();
   virtual void update(float temp, float humidity, float pressure)=0;
};

#endif
