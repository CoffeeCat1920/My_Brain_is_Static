#include <iostream>

#include "../include/mainMenu.h"



void MainMenu::Draw() {

  DrawText("shit", 2*BLOCK, 2*BLOCK, BLOCK, WHITE);

}

bool MainMenu::Change() {

  if (IsKeyPressed(KEY_W)) {

    return true;

    std::cout << "Scence Change" << std::endl;

  }

  return false;

}
