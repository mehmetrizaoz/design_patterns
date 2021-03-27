#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
   Player* clone() const;
   void attributes() const;
private:
   virtual Player* performClone() const = 0;
   virtual void performAttributes() const = 0;
};

#endif
