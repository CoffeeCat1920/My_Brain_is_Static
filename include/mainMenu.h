#ifndef MAINMENU_H
#define MAINMENU_H

#include "./raylib.h"
#include "./settings.h"

#include <string>

class MainMenu {

private:

  const char *start = "Start";

  Font boldFont;
  Font textFont;

public:

  MainMenu() {

  }

  ~MainMenu() {
    //UnloadFont(boldFont);
    //UnloadFont(textFont);
  }

  void Init();
  void Draw(); 
  bool Change();

};

#endif // !MAINMENU_H
