#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
   void update();
private:
   virtual void performUpdate()=0;
};

#endif
