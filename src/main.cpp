#include "../include/raylib.h"
#include "../include/settings.h"
#include "../include/gameManager.h"
#include "../include/mainMenu.h"
#include "../include/Room1.cpp" 

class Game {

private:

  MainMenu mainMenu;
  RoomOne room; 
  
public:

  Game() {

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


  while (!WindowShouldClose()) {

    BeginDrawing();

    game.Draw();

    ClearBackground(BLACK);

    EndDrawing();

  }

  return 0;
}
