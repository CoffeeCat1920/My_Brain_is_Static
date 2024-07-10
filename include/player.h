#ifndef PLAYER_H
#define PLAYER_H

#include "./raylib.h"
#include "./raymath.h"
#include "./settings.h"
#include "./animation.h"

#include <iostream>

class Player {

private:

  Vector2 position;
  
  Image playerImg = LoadImage("../assets/pngs/player/Player.png");
  Texture2D playerTexture;

  SpriteAnimation spriteAnimation;

public:

  Player(Vector2 position) : position(position) {}

  ~Player() {
    //UnloadImage(playerImg);
    //UnloadTexture(playerTexture);
  }

  Vector2 Move( Vector2 position );
  void Draw(); 
  void Init();

};

#endif //PLAYER_H
