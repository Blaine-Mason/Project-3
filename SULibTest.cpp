#include<iostream>
#include "SUList.h"
#include "SUStack.h"
#include "SUQueue.h"
#include "payroll.h"


int main(){
  /*Tests will include:
  ~SUList(PayRoll, std::string)
  ~SUStackArr(int, double)
  ~SUStackList(PayRoll, std::string,)
  ~SUQueueArr(int, double)
  ~SUQueueList(PayRoll, std::string)
  Each test will perform the following operations in order with Prints following each test
  (psuedo terminology, add = enqueue, push; remove = dequeue, pop)
    -Add 4 Elements of each type.
    -Remove 2 elements 
    -Perform a CC
    -Add one element to the newly CC'd
    -Perform an old = CC 
  */
  PayRoll a("Test A", 15, 20);
  PayRoll b("Test B", 45, 30);
  PayRoll c("Test C", 14, 25);
  PayRoll d("Test D", 9, 50);
  PayRoll e("Test E", 9, 50);
  PayRoll del;
  std::string strdel;
  int intdel;
  double doubledel;


  /*
  *---------------
  * SUList 
  *---------------
  */
  std::cout << "===========================" << std::endl;
  std::cout << "|       SUList Tests      |" << std::endl;
  std::cout << "===========================" << std::endl;
  std::cout << "PayRoll:" << std::endl << std::endl;
  std::cout << "Adding 4 Objects:" << std::endl;
  SUList<PayRoll> pRoll;
  pRoll.putFront(a);
  pRoll.putFront(b);
  pRoll.putBack(c);
  pRoll.putBack(d);
  pRoll.display(); //<< overload


  std::cout << "Removing 2 Objects(One from front, One from back)" << std::endl;
  del = pRoll.getFront();
  pRoll.display(); //<< overload
  del = pRoll.getBack();
  pRoll.display(); //<< overload


  SUList<PayRoll> pRollCC(pRoll);
  std::cout << "Adding 1 Object" << std::endl;
  pRollCC.putFront(e);
  pRollCC.display(); //<< overload

  pRollCC.contains(e);


  std::cout << "LHS:" << std::endl;
  pRoll.display(); //<< overload
  pRoll = pRollCC;
  std::cout << "RHS:" << std::endl;
  pRollCC.display(); //<< overload 
  std::cout << "LHS After Assignment:" << std::endl;
  pRoll.display(); //<< overload

  std::cout << "String: " << std::endl << std::endl;
  std::cout << "Adding 4 Objects:" << std::endl;
  SUList<std::string> stringTest;
  stringTest.putFront("String 1");
  stringTest.putFront("String 2");
  stringTest.putBack("String 3");
  stringTest.putBack("String 4");
  stringTest.display(); //<< overload


  std::cout << "Removing 2 Objects(One from front, One from back)" << std::endl;
  strdel = stringTest.getFront();
  stringTest.display(); //<< overload
  strdel = stringTest.getBack();
  stringTest.display(); //<< overload


  SUList<std::string> stringCC(stringTest);
  std::cout << "Adding 1 Object" << std::endl;
  stringCC.putFront("string 5");
  stringCC.display(); //<< overload


  std::cout << "LHS:" << std::endl;
  stringTest.display(); //<< overload
  stringTest = stringCC;
  std::cout << "RHS:" << std::endl;
  stringCC.display(); //<< overload 
  std::cout << "LHS After Assignment:" << std::endl;
  stringTest.display(); //<< overload

  /*
  *---------------
  * SUStackArr 
  *---------------
  */
  std::cout << "===========================" << std::endl;
  std::cout << "|     SUStackArr Tests    |" << std::endl;
  std::cout << "===========================" << std::endl;
  std::cout << "Int:" << std::endl << std::endl;
  std::cout << "Adding 4 Objects:" << std::endl;
  SUStackArr<int> intArr;
  intArr.push(1);
  intArr.push(2);
  intArr.push(3);
  intArr.push(4);
  intArr.printStack(); //<< overload


  std::cout << "Removing 2 Objects" << std::endl;
  intArr.pop(intdel);
  intArr.printStack(); //<< overload
  intArr.pop(intdel);
  intArr.printStack(); //<< overload


  SUStackArr<int> intCCArr(intArr);
  std::cout << "Adding 1 Object" << std::endl;
  intCCArr.push(5);
  intCCArr.printStack(); //<< overload


  std::cout << "LHS:" << std::endl;
  intArr.printStack(); //<< overload
  intArr = intCCArr;
  std::cout << "RHS:" << std::endl;
  intCCArr.printStack(); //<< overload 
  std::cout << "LHS After Assignment:" << std::endl;
  intArr.printStack(); //<< overload



  std::cout << "Double: " << std::endl << std::endl;
  std::cout << "Adding 4 Objects:" << std::endl;
  SUStackArr<double> doubleArr;
  doubleArr.push(1.01);
  doubleArr.push(2.02);
  doubleArr.push(3.03);
  doubleArr.push(4.04);
  doubleArr.printStack(); //<< overload


  std::cout << "Removing 2 Objects" << std::endl;
  doubleArr.pop(doubledel);
  doubleArr.printStack(); //<< overload
  doubleArr.pop(doubledel);
  doubleArr.printStack(); //<< overload


  SUStackArr<double> doubleCCArr(doubleArr);
  std::cout << "Adding 1 Object" << std::endl;
  doubleCCArr.push(5.05);
  doubleCCArr.printStack(); //<< overload


  std::cout << "LHS:" << std::endl;
  doubleArr.printStack(); //<< overload
  doubleArr = doubleCCArr;
  std::cout << "RHS:" << std::endl;
  doubleCCArr.printStack(); //<< overload 
  std::cout << "LHS After Assignment:" << std::endl;
  doubleArr.printStack(); //<< overload


  /*
  *---------------
  * SUStackList
  *---------------
  */
  std::cout << "===========================" << std::endl;
  std::cout << "|    SUStackList Tests    |" << std::endl;
  std::cout << "===========================" << std::endl;
  std::cout << "PayRoll:" << std::endl << std::endl;
  std::cout << "Adding 4 Objects:" << std::endl;
  SUStackList<PayRoll> pRollStack;
  pRollStack.push(a);
  pRollStack.push(b);
  pRollStack.push(c);
  pRollStack.push(d);
  pRollStack.printStack(); //<< overload


  std::cout << "Removing 2 Objects" << std::endl;
  pRollStack.pop(del);
  pRollStack.printStack(); //<< overload
  pRollStack.pop(del);
  pRollStack.printStack(); //<< overload


  SUStackList<PayRoll> pRollCCList(pRollStack);
  std::cout << "Adding 1 Object" << std::endl;
  pRollCCList.push(e);
  pRollCCList.printStack(); //<< overload


  std::cout << "LHS:" << std::endl;
  pRollStack.printStack(); //<< overload
  pRollStack = pRollCCList;
  std::cout << "RHS:" << std::endl;
  pRollCCList.printStack(); //<< overload 
  std::cout << "LHS After Assignment:" << std::endl;
  pRollStack.printStack(); //<< overload

  std::cout << "String: " << std::endl << std::endl;
  std::cout << "Adding 4 Objects:" << std::endl;
  SUStackList<std::string> stringTestList;
  stringTestList.push("String 1");
  stringTestList.push("String 2");
  stringTestList.push("String 3");
  stringTestList.push("String 4");
  stringTestList.printStack(); //<< overload


  std::cout << "Removing 2 Objects(One from front, One from back)" << std::endl;
  stringTestList.pop(strdel);
  stringTestList.printStack(); //<< overload
  stringTestList.pop(strdel);
  stringTestList.printStack(); //<< overload


  SUStackList<std::string> stringCCList(stringTestList);
  std::cout << "Adding 1 Object" << std::endl;
  stringCCList.push("string 5");
  stringCCList.printStack(); //<< overload


  std::cout << "LHS:" << std::endl;
  stringTestList.printStack(); //<< overload
  stringTestList = stringCCList;
  std::cout << "RHS:" << std::endl;
  stringCCList.printStack(); //<< overload 
  std::cout << "LHS After Assignment:" << std::endl;
  stringTestList.printStack(); //<< overload


  /*
  *---------------
  * SUQueueArr  
  *---------------
  */
  std::cout << "===========================" << std::endl;
  std::cout << "|     SUQueueArr Tests    |" << std::endl;
  std::cout << "===========================" << std::endl;
  std::cout << "Int:" << std::endl << std::endl;
  std::cout << "Adding 4 Objects:" << std::endl;
  SUQueueArr<int> intQ;
  intQ.enqueue(1);
  intQ.enqueue(2);
  intQ.enqueue(3);
  intQ.enqueue(4);
  intQ.printQueue(); //<< overload


  std::cout << "Removing 2 Objects" << std::endl;
  intQ.dequeue(intdel);
  intQ.printQueue(); //<< overload
  intQ.dequeue(intdel);
  intQ.printQueue(); //<< overload


  SUQueueArr<int> intCCQ(intQ);
  std::cout << "Adding 1 Object" << std::endl;
  intCCQ.enqueue(5);
  intCCQ.printQueue(); //<< overload


  std::cout << "LHS:" << std::endl;
  intQ.printQueue(); //<< overload
  intQ = intCCQ;
  std::cout << "RHS:" << std::endl;
  intCCQ.printQueue(); //<< overload 
  std::cout << "LHS After Assignment:" << std::endl;
  intQ.printQueue(); //<< overload



  std::cout << "Double: " << std::endl << std::endl;
  std::cout << "Adding 4 Objects:" << std::endl;
  SUQueueArr<double> doubleQ;
  doubleQ.enqueue(1.01);
  doubleQ.enqueue(2.02);
  doubleQ.enqueue(3.03);
  doubleQ.enqueue(4.04);
  doubleQ.printQueue(); //<< overload


  std::cout << "Removing 2 Objects" << std::endl;
  doubleQ.dequeue(doubledel);
  doubleQ.printQueue(); //<< overload
  doubleQ.dequeue(doubledel);
  doubleQ.printQueue(); //<< overload


  SUQueueArr<double> doubleCCQ(doubleQ);
  std::cout << "Adding 1 Object" << std::endl;
  doubleCCQ.enqueue(5.05);
  doubleCCQ.printQueue(); //<< overload


  std::cout << "LHS:" << std::endl;
  doubleQ.printQueue(); //<< overload
  doubleQ = doubleCCQ;
  std::cout << "RHS:" << std::endl;
  doubleCCQ.printQueue(); //<< overload 
  std::cout << "LHS After Assignment:" << std::endl;
  doubleQ.printQueue(); //<< overload



  /*
  *---------------
  * SUQueueList
  *---------------
  */
  std::cout << "===========================" << std::endl;
  std::cout << "|     SUQueueList Tests   |" << std::endl;
  std::cout << "===========================" << std::endl;
  std::cout << "PayRoll:" << std::endl << std::endl;
  std::cout << "Adding 4 Objects:" << std::endl;
  SUQueueList<PayRoll> pRollQ;
  pRollQ.enqueue(a);
  pRollQ.enqueue(b);
  pRollQ.enqueue(c);
  pRollQ.enqueue(d);
  pRollQ.printQueue(); //<< overload


  std::cout << "Removing 2 Objects" << std::endl;
  pRollQ.dequeue(del);
  pRollQ.printQueue(); //<< overload
  pRollQ.dequeue(del);
  pRollQ.printQueue(); //<< overload


  SUQueueList<PayRoll> pRollCCQ(pRollQ);
  std::cout << "Adding 1 Object" << std::endl;
  pRollCCQ.enqueue(e);
  pRollCCQ.printQueue(); //<< overload


  std::cout << "LHS:" << std::endl;
  pRollQ.printQueue(); //<< overload
  pRollQ = pRollCCQ;
  std::cout << "RHS:" << std::endl;
  pRollCCQ.printQueue(); //<< overload 
  std::cout << "LHS After Assignment:" << std::endl;
  pRollQ.printQueue(); //<< overload

  std::cout << "String: " << std::endl << std::endl;
  std::cout << "Adding 4 Objects:" << std::endl;
  SUQueueList<std::string> stringTestQ;
  stringTestQ.enqueue("String 1");
  stringTestQ.enqueue("String 2");
  stringTestQ.enqueue("String 3");
  stringTestQ.enqueue("String 4");
  stringTestQ.printQueue(); //<< overload


  std::cout << "Removing 2 Objects" << std::endl;
  stringTestQ.dequeue(strdel);
  stringTestQ.printQueue(); //<< overload
  stringTestQ.dequeue(strdel);
  stringTestQ.printQueue(); //<< overload


  SUQueueList<std::string> stringCCQ(stringTestQ);
  std::cout << "Adding 1 Object" << std::endl;
  stringCCQ.enqueue("string 5");
  stringCCQ.printQueue(); //<< overload


  std::cout << "LHS:" << std::endl;
  stringTestQ.printQueue(); //<< overload
  stringTestQ = stringCCQ;
  std::cout << "RHS:" << std::endl;
  stringCCQ.printQueue(); //<< overload 
  std::cout << "LHS After Assignment:" << std::endl;
  stringTestQ.printQueue(); //<< overload

  return 0;
}
