#include "../include/animation.h"

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

  DrawTexturePro(texture, Rectangle { (float)frameSize * currentFrame, (float)frameSize * currentFrame, (float)frameSize, (float)frameSize } , Rectangle { position.x, position.y, (float)frameSize , (float)frameSize } , Vector2{0, 0}, rotation, tint); 

}
