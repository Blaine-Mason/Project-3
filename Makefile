all: run

run: test.o list.o stack.o queue.o
	g++ -std=c++11 -o run test.o list.o stack.o queue.o
test.o: SULibTest.cpp
	g++ -std=c++11 -c SULibTest.cpp
list.o:	SUList.h SUList.cpp
	g++ -std=c++11 -c SUList.h SUList.cpp
stack.o: SUStack.h SUStack.h 
	g++ -std=c++11 -c SUStack.h SUStack.cpp
queue.o: SUQueue.h SUQueue.cpp
	g++ -std=c++11 -c SUQueue.h SUQueue.cpp
clean:
	rm *.gch
	rm *.o
