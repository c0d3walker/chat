#include "model.h"
#include <iostream>
using namespace std;

Model::Model(Controller* controllerPointer){
  this -> controller = controllerPointer;
  this -> init();
}

//TODO deleting all objects without the controller
Model::~Model(){
  controller = 0;
}

 
void Model::init(){
  cout << "model" << endl;
  
}

//TODO receive messages from the network
void Model::receiveMessage(){
  controller -> show(string("test message"));
}

//TODO send messages through the network
void Model::sendMessage(string message){
  cout << "to send: " << message << endl;
}
