#include "../include/player.h"

void Player::Init() {

  playerImg = LoadImage("./assets/pngs/player/Player.png");

  playerTexture = LoadTextureFromImage(playerImg);

  SetTextureFilter(playerTexture, TEXTURE_FILTER_POINT);

  UnloadImage(playerImg);

}

void Player::Draw() {

  DrawTextureV(playerTexture, Vector2{BLOCK * 3, BLOCK * 3}, WHITE);

}
