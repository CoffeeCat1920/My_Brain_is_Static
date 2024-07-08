#ifndef PLAYER_H
#define PLAYER_H

#include "./raylib.h"
#include "./settings.h"

class Player {

private:
  
  Vector2 position;

  Image playerImg;
  Texture2D playerTexture;

public:

  Player() {
    this->position = Vector2{BLOCK/2, BLOCK/2};
  }

  Player(Vector2 position) {
    this->position = position;
  }

  ~Player() {
    //UnloadImage(playerImg);
    //UnloadTexture(playerTexture);
  }

  void Draw(); 
  void Init();

};

#endif //PLAYER_H
