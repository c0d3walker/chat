
clean:
	cd obj;rm *.o
	rm chat
	
all: starter.cpp controller view model
	cd obj;g++ -std=c++11 -o ../chat ../starter.cpp controller.o view.o model.o

controller: controller.h controller.cpp
	g++ -c -g -std=c++11 -o obj/controller.o controller.cpp
	
view: view.h view.cpp 
	g++ -c -g -std=c++11 -pthread -o obj/view.o view.cpp

model: model.h model.cpp 
	g++ -c -g -std=c++11 -o obj/model.o model.cpp
