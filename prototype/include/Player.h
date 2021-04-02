#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
   Player();
//   Player* clone() const;
//   void attributes() const;
//private:
   virtual Player* clone() const = 0;
   virtual void attributes() const = 0;
};

#endif
