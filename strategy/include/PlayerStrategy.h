#pragma once

class PlayerStrategy{ 
public:
   void shoot();
private:
   virtual void performShoot() = 0;
};