#include "../include/animation.h"

Vector2 SpriteAnimation::GetPosition() {
  return Vector2 { position.x, position.y };
}

void SpriteAnimation::Draw(Vector2 position) {

  bool goingUp = true;

  frameCounter++;

  if ( frameCounter >= (60/frameSpeed) ) {

    frameCounter = 0;

    currentFrame++;

    if ( currentFrame > 4 ) {

      currentFrame = 0;

    }

  } 

  Rectangle source = Rectangle {position.x, position.y, (float)frameSize, (float)frameSize};

  DrawTexturePro(texture, Rectangle { (float)frameSize * currentFrame, (float)frameSize * currentFrame, (float)frameSize, (float)frameSize } , source, Vector2{0, 0}, rotation, tint); 
  
  this->position = position;

}



Rectangle SpriteAnimation::GetRectangle() {

  Rectangle source = Rectangle {position.x, position.y, (float)frameSize, (float)frameSize};

  return  source;

}  
