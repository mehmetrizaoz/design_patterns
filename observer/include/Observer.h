#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
   void update(float temp, float humidity, float pressure);
private:
   virtual void performUpdate(float temp, float humidity, float pressure)=0;
};

#endif
