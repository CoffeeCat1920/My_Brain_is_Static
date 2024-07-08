#include "../include/mainMenu.h"

void MainMenu::Init() {

  boldFont = LoadFontEx("./assets/font/Kaph.ttf", 53, NULL, 0);
  textFont = LoadFontEx("./assets/font/m6x11.ttf", 25, NULL, 0);

}

void MainMenu::Draw() {

  DrawTextEx(boldFont, "Oh! My Brain", Vector2{BLOCK-25, BLOCK}, boldFont.baseSize, 4, TEXT);
  DrawTextEx(boldFont, "Is Static", Vector2{BLOCK*2-50, BLOCK*2}, boldFont.baseSize, 4, TEXT);

  DrawTextEx(textFont, "(Press Space to start)", Vector2{BLOCK*2-52, BLOCK*4}, textFont.baseSize, 4, TEXT);

}

bool MainMenu::Change() {

  if (IsKeyPressed(KEY_SPACE)) {
    return true;
  }

  return false;

}
