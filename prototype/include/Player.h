#pragma once

class Player {
public:
   virtual Player* clone() const = 0;
   virtual void attributes() const = 0;
};

