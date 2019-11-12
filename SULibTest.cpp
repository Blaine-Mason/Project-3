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
  return 0;
}
