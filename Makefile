all: run

run: SULibTest.o
	g++ -std=c++11 -o run SULibTest.o
SULibTest.o: SULibTest.cpp SUList.cpp SUStack.cpp SUQueue.cpp SUList.h SUStack.h SUQueue.h
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
