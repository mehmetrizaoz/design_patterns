#ifndef DISPLAY_ELEMENT_H
#define DISPLAY_ELEMENT_H

class DisplayElement {
public:
   void display();
private:
   virtual void performDisplay()=0;
};

#endif
