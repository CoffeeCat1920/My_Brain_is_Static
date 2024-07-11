#include "../include/player.h"

void Player::Init() {

  playerImg = LoadImage("./assets/pngs/player/Player.png");

  std::cout << "The Image is : " << IsImageReady(playerImg) << std::endl;

  spriteAnimation = SpriteAnimation(playerImg, Vector2{ position.x, position.y }, 64, Vector2{5, 1}, 0.0f, WHITE);

}

Vector2 Player::Move( Vector2 position ) {

  if (IsKeyDown(KEY_RIGHT)) position.x += 5.0f;
  if (IsKeyDown(KEY_LEFT)) position.x -= 5.0f;
  if (IsKeyDown(KEY_DOWN)) position.y += 5.0f;
  if (IsKeyDown(KEY_UP)) position.y -= 5.0f;

  return position;

}

void Player::Draw() {

  position = Move( position );

  spriteAnimation.Draw(position); 
  
}

Rectangle Player::GetRectangle() {

  Rectangle rec = spriteAnimation.GetRectangle();

  return rec;

}

bool Player::CheckCollision( Rectangle rec ) {

  return CheckCollisionRecs(this->GetRectangle(), rec);

}
