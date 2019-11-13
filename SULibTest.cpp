#include<iostream>
#include "SUList.h"
#include "SUStack.h"
#include "SUQueue.h"


int main(){
  SUStackArr<int> intStack;

  intStack.push(1);
  intStack.push(2);
  intStack.push(3);
  intStack.printStack();

  std::cout << std::endl;

  SUQueueArr<int> intQueue;
  intQueue.enqueue(7);
  intQueue.enqueue(8);
  intQueue.enqueue(9);
  intQueue.printQueue();

  std::cout << std::endl;

  SUList<int> intList;
  intList.putFront(10);
  intList.putFront(12);
  intList.putBack(15);
  intList.display();
  std::cout << intList.size() << std::endl;
  return 0;
}
