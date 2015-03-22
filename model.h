
#ifndef __model_h__
#define __model_h__

class Model;

#include "controller.h"
#include <string>
using namespace std;

class Model{
  public:
    Model(Controller*);
    ~Model();
    
    void sendMessage(string);

  
  private:
    void init();
    void receiveMessage();
  	
    Controller* controller;
};

#endif
