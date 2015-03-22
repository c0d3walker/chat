#include "view.h"
#include <iostream>
using namespace std;

View::View(Controller* controllerPointer){ 
	this -> controller = controllerPointer;
	this -> init();
}

//TODO deleting all objects without the controller
View::~View(){
	controller = 0;
}

void View::init(){
	cout << "view" << endl;
//  std::thread t(readInput);
//  t.join();
  this -> printMessage(string("abc"));
	
}

//TODO printing all messages in the output stream
void View::printMessage(string message){
  printf("%ssys:%s %s\n",COLOR,COLOR_CLEAR,message.c_str());
}

//TODO reading in the input stream
void View::readInput(){
  string message = string("");
  string exit = string("");
  
  while(message != exit){
    cout << " >> ";
    cin >> message;
    controller -> sendMessage(message);
  }
}
