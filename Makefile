all: run

run: SULibTest.o payroll.o
	g++ -std=c++11 -o run SULibTest.o payroll.o
SULibTest.o: SULibTest.cpp SUList.cpp SUStack.cpp SUQueue.cpp SUList.h SUStack.h SUQueue.h payroll.cpp payroll.h
	g++ -std=c++11 -c SULibTest.cpp payroll.cpp
SUList.o:	SUList.h SUList.cpp
	g++ -std=c++11 -c SUList.h SUList.cpp
SUStack.o: SUStack.h SUStack.h
	g++ -std=c++11 -c SUStack.h SUStack.cpp
SUQueue.o: SUQueue.h SUQueue.cpp
	g++ -std=c++11 -c SUQueue.h SUQueue.cpp
payroll.o: payroll.cpp payroll.h
	g++ -std=c++11 -c payroll.cpp
clean:
	rm *.gch
	rm *.o
