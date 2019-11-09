all: run

run: SULibTest.o SUList.o SUStack.o SUQueue.o 
	g++ -std=c++11 -o run SULibTest.o SUList.o SUStack.o SUQueue.o
SULibTest.o: SULibTest.cpp
	g++ -std=c++11 -c SULibTest.cpp
SUList.o:	SUList.h SUList.cpp
	g++ -std=c++11 -c SUList.h SUList.cpp
SUStack.o: SUStack.h SUStack.h
	g++ -std=c++11 -c SUStack.h SUStack.cpp
SUQueue.o: SUQueue.h SUQueue.cpp
	g++ -std=c++11 -c SUQueue.h SUQueue.cpp
clean:
	rm *.gch
	rm *.o
