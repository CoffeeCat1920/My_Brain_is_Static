#ifndef MAINMENU_H
#define MAINMENU_H

#include "./raylib.h"
#include "./settings.h"

#include <string>

class MainMenu {

private:

  std::string Menu = "Main";

  Image dest;

public:

  void Draw(); 
  bool Change();

};

#endif // !MAINMENU_H
