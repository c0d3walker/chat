#include "controller.h"
#include <iostream>
#include <string>
using namespace std;

void Controller::init(){
	cout << "controller" << endl;
	view = new View(this);
  model = new Model(this);
}

Controller::Controller(){
  this -> init();
  
}

//TODO triggering all destructors!
Controller::~Controller(){
  delete view;
  view = 0;
  delete model;
  model = 0;
}

// transfer message from model to view
void Controller::show(string message){
  view -> printMessage(message);
}

// transfer message from view to model
void Controller::sendMessage(string message){
  model -> sendMessage(message);
}
