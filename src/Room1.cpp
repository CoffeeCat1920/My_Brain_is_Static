#include "../include/Room1.h"

void RoomOne::Init() {

  player.Init();

}

void RoomOne::Draw() {

  player.Draw();

  DrawRectangleRec(obstical, WHITE);

  std::cout << player.CheckCollision(obstical) << std::endl;

}

SceneState RoomOne::Change() {
  
  if (IsKeyPressed(KEY_S)) {
    return MAIN_MENU;
  } 

  return GAMEPLAY;

}
