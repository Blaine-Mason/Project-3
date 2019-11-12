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
  return 0;
}
