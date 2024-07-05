#ifndef PLAYER_H
#define PLAYER_H

#include "./raylib.h"
#include "./settings.h"

class Player {

private:
  
  Vector2 position;

public:

  Player() {
    this->position = Vector2{BLOCK/2, BLOCK/2};
  }

  Player(Vector2 position) {
    this->position = position;
  }

  void Draw(); 

};

#endif //PLAYER_H
