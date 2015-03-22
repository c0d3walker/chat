
#ifndef __view_h__
#define __view_h__

class View;

#include <string>
#include <thread>
#include "controller.h"
using namespace std;

#define COLOR "\033[32m\033[5m\033[1m"
#define COLOR_CLEAR "\E[m"

class View{
  public:
    View(Controller*);
    ~View();
    void printMessage(string);
    
  private:
  	void init();
  	void readInput();
  	
  	Controller* controller;
};

#endif
