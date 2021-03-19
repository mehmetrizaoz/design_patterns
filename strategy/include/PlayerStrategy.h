#ifndef PATTESTRATEGY_H
#define PATTESTRATEGY_H

class PlayerStrategy{ 
public:
   void shoot();
private:
   virtual void performShoot() = 0;
};
   

#endif