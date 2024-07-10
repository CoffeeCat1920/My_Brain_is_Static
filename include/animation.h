#ifndef ANIMATION_H
#define ANIMATION_H

#include "./raylib.h"

#include <iostream>

class SpriteAnimation {

private:

  Image atlas;
  Texture2D texture;

  float rotation;

  int frameCounter;
  int frameSize;
  int currentFrame;
  int frameSpeed;
  Vector2 numOfFrames;

  Color tint;

public: 

  SpriteAnimation() {

  }

  SpriteAnimation(Image atlas, int frameSize, Vector2 numOfFrames, float rotation, Color tint) {

    this->atlas = atlas;
    this->texture = LoadTextureFromImage(atlas);

    this->frameSize = frameSize;
    this->numOfFrames = numOfFrames;

    this->rotation = rotation;

    this->tint = tint;

    this->currentFrame = 0;
    this->frameCounter = 0;
    this->frameSpeed = 3;


  }

  void Draw(Vector2 position);
  void Animate();


};

#endif // !ANIMATION_H
