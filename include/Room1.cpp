#ifndef ROOM_ONE_H
#define ROOM_ONE_H

#include "player.h"
#include "gameManager.h"
#include "raylib.h"

class RoomOne {

private:

  Player player; 

public:

  RoomOne() : player(Player(Vector2{2*BLOCK, 2*BLOCK})) {};

  void Draw() {
    player.Draw();
  }

  SceneState Change() {

    if (IsKeyPressed(KEY_S)) {
      return MAIN_MENU;
    } 

    return GAMEPLAY;

  }

};

#endif // !ROOM_ONE_H
