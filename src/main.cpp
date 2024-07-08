#include "../include/raylib.h"
#include "../include/settings.h"
#include "../include/gameManager.h"
#include "../include/mainMenu.h"
#include "../include/Room1.h" 

class Game {

private:

  MainMenu mainMenu;
  RoomOne room; 
  
  SceneState currentState;
  
public:

  Game() {

    currentState = MAIN_MENU;

  }

  void Init() {

    mainMenu.Init();
    room.Init();

  }

  void Draw() {

    switch (currentState) {

      case MAIN_MENU:

      mainMenu.Draw();

      if (mainMenu.Change()) {
          currentState = GAMEPLAY; 
        }

      return;

      case GAMEPLAY:

        room.Draw();
        
        currentState = room.Change();


      return;
    }

  }

};

int main (int argc, char *argv[]) {

  Game game;

  InitWindow(BOARD * BLOCK,  BOARD * BLOCK, "WHY IS MY BRAIN STATIC");    

  game.Init();

  //ToggleFullscreen();

  while (!WindowShouldClose()) {

    BeginDrawing();

    game.Draw();

    ClearBackground(BACKGROUND);

    EndDrawing();

  }

  CloseWindow();

  return 0;
}
