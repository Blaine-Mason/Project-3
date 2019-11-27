#include<iostream>
#include "SUList.h"
#include "SUStack.h"
#include "SUQueue.h"


int main(){
  SUStackArr<int> intStack;
  std::cout << "==========================" << std::endl;
  std::cout << "Stack Test :-:" << std::endl;
  intStack.push(1);
  intStack.push(2);
  intStack.push(3);
  intStack.printStack();


  std::cout << "==========================" << std::endl;


  SUQueueArr<int> intQueue;
  std::cout << "Queue Test :-:" << std::endl;
  intQueue.enqueue(7);
  intQueue.enqueue(8);
  intQueue.enqueue(9);
  intQueue.printQueue();

  std::cout << "==========================" << std::endl;

  SUList<int> intList;
  std::cout << "List Test :-:" << std::endl;
  intList.putFront(10);
  intList.putFront(12);
  intList.putBack(15);
  intList.display();
  std::cout << "Size: " << intList.size() << std::endl;

  std::cout << "==========================" << std::endl;

  SUQueueList<int> intQueueList;
  std::cout << "QueueList Test :-:" << std::endl;
  intQueueList.enqueue(7);
  intQueueList.enqueue(10);
  intQueueList.enqueue(8);
  intQueueList.enqueue(5);
  std::cout << "Size: " << intQueueList.size() << std::endl;
  intQueueList.printQueue();
  int test = 0;
  intQueueList.dequeue(test);
  std::cout << "Dequeued: " << test << std::endl;
  intQueueList.printQueue();

  std::cout << "==========================" << std::endl;


  SUStackList<int> intStackList;
  std::cout << "StackList Test :-:" << std::endl;
  intStackList.push(7);
  intStackList.push(10);
  intStackList.push(2);
  intStackList.push(5);
  intStackList.printStack();
  int stackListTest = 0;
  intStackList.pop(stackListTest);
  intStackList.printStack();
  std::cout << "==========================" << std::endl;


  SUStackArr<int> testRotStack;
  testRotStack = intStack;
  SUQueueArr<int> testRotQ;
  testRotQ = intQueue;

  testRotStack.printStack();
  testRotQ.printQueue();
  SUStackArr<std::string> dummyArr;

  dummyArr.push("Hi");
  dummyArr.push("This");
  dummyArr.push("Works");
  SUStackArr<std::string> testCCStackArr(dummyArr);

  dummyArr.printStack();
  testCCStackArr.printStack();


  SUQueueArr<std::string> dummyQ;

  dummyQ.enqueue("Hi");
  dummyQ.enqueue("This");
  dummyQ.enqueue("Forsure");
  dummyQ.enqueue("Works");
  SUQueueArr<std::string> testCCQArr(dummyQ);

  dummyQ.printQueue();
  testCCQArr.printQueue();


  return 0;
}
