
#ifndef __controller_h__
#define __controller_h__

class Controller;

#include "model.h"
#include "view.h"
using namespace std;

class Controller{
  public:
    Controller();
    ~Controller();
    void init();
    
    void show(string);
    void sendMessage(string);
  
  private:
    Model* model;
    View* view;
};

#endif
