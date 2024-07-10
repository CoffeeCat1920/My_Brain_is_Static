#ifndef ROOM_ONE_H
#define ROOM_ONE_H

#include "player.h"
#include "gameManager.h"
#include "raylib.h"

class RoomOne {

private:

  Player player; 

public:

  RoomOne() : player((Vector2{2*BLOCK, 2*BLOCK})) {};

  void Draw();
  void Init();
  SceneState Change();

};

#endif // !ROOM_ONE_H
