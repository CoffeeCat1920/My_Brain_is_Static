#ifndef GAME_H 
#define GAME_H 

#include "./raylib.h"

enum SceneState {
  MAIN_MENU,
  GAMEPLAY
};

SceneState currentState = MAIN_MENU;

#endif 
