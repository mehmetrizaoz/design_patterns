#pragma once

class CaffeineBeverage {  
public:
   void prepareRecipe(); 
   void boilWater();
   void pourInCup();
   void brew();
   void addCondiments();
private:   
   virtual void performBrew()=0;
   virtual void performAddCondiments()=0;

};

