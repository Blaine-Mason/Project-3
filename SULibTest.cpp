#include<iostream>
#include <stdlib.h>
#include "SUList.h"
#include "SUStack.h"
#include "SUQueue.h"
#include "SUTree.h"
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
  std::cout << pRoll;   


  std::cout << "Removing 2 Objects(One from front, One from back)" << std::endl;
  del = pRoll.getFront();
  std::cout << pRoll;   
  del = pRoll.getBack();
  std::cout << pRoll;   


  SUList<PayRoll> pRollCC(pRoll);
  std::cout << "Adding 1 Object" << std::endl;
  pRollCC.putFront(e);
  std::cout << pRollCC;   

  pRollCC.contains(e);


  std::cout << "LHS:" << std::endl;
  std::cout << pRoll;   
  pRoll = pRollCC;
  std::cout << "RHS:" << std::endl;
  std::cout << pRollCC;   
  std::cout << "LHS After Assignment:" << std::endl;
  std::cout << pRoll;   

  std::cout << "String: " << std::endl << std::endl;
  std::cout << "Adding 4 Objects:" << std::endl;
  SUList<std::string> stringTest;
  stringTest.putFront("String 1");
  stringTest.putFront("String 2");
  stringTest.putBack("String 3");
  stringTest.putBack("String 4");
  std::cout << stringTest;   


  std::cout << "Removing 2 Objects(One from front, One from back)" << std::endl;
  strdel = stringTest.getFront();
  std::cout << stringTest;   
  strdel = stringTest.getBack();
  std::cout << stringTest;   


  SUList<std::string> stringCC(stringTest);
  std::cout << "Adding 1 Object" << std::endl;
  stringCC.putFront("string 5");
  std::cout << stringCC;   


  std::cout << "LHS:" << std::endl;
  std::cout << stringTest;   
  stringTest = stringCC;
  std::cout << "RHS:" << std::endl;
  std::cout << stringCC;   
  std::cout << "LHS After Assignment:" << std::endl;
  std::cout << stringTest;   

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
  std::cout << intArr;   


  std::cout << "Removing 2 Objects" << std::endl;
  intArr.pop(intdel);
  std::cout << intArr;   
  intArr.pop(intdel);
  std::cout << intArr;   


  SUStackArr<int> intCCArr(intArr);
  std::cout << "Adding 1 Object" << std::endl;
  intCCArr.push(5);
  std::cout << intCCArr;   


  std::cout << "LHS:" << std::endl;
  std::cout << intArr;   
  intArr = intCCArr;
  std::cout << "RHS:" << std::endl;
  std::cout << intCCArr;   
  std::cout << "LHS After Assignment:" << std::endl;
  std::cout << intArr;   



  std::cout << "Double: " << std::endl << std::endl;
  std::cout << "Adding 4 Objects:" << std::endl;
  SUStackArr<double> doubleArr;
  doubleArr.push(1.01);
  doubleArr.push(2.02);
  doubleArr.push(3.03);
  doubleArr.push(4.04);
  std::cout << doubleArr;   


  std::cout << "Removing 2 Objects" << std::endl;
  doubleArr.pop(doubledel);
  std::cout << doubleArr;   
  doubleArr.pop(doubledel);
  std::cout << doubleArr;   


  SUStackArr<double> doubleCCArr(doubleArr);
  std::cout << "Adding 1 Object" << std::endl;
  doubleCCArr.push(5.05);
  std::cout << doubleCCArr;   


  std::cout << "LHS:" << std::endl;
  std::cout << doubleArr;   
  doubleArr = doubleCCArr;
  std::cout << "RHS:" << std::endl;
  std::cout << doubleCCArr;   
  std::cout << "LHS After Assignment:" << std::endl;
  std::cout << doubleArr;   


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
  std::cout << pRollStack;   


  std::cout << "Removing 2 Objects" << std::endl;
  pRollStack.pop(del);
  std::cout << pRollStack;   
  pRollStack.pop(del);
  std::cout << pRollStack;   


  SUStackList<PayRoll> pRollCCList(pRollStack);
  std::cout << "Adding 1 Object" << std::endl;
  pRollCCList.push(e);
  std::cout << pRollCCList;   


  std::cout << "LHS:" << std::endl;
  std::cout << pRollStack;   
  pRollStack = pRollCCList;
  std::cout << "RHS:" << std::endl;
  std::cout << pRollCCList;   
  std::cout << "LHS After Assignment:" << std::endl;
  std::cout << pRollStack;   

  std::cout << "String: " << std::endl << std::endl;
  std::cout << "Adding 4 Objects:" << std::endl;
  SUStackList<std::string> stringTestList;
  stringTestList.push("String 1");
  stringTestList.push("String 2");
  stringTestList.push("String 3");
  stringTestList.push("String 4");
  std::cout << stringTestList;   


  std::cout << "Removing 2 Objects(One from front, One from back)" << std::endl;
  stringTestList.pop(strdel);
  std::cout << stringTestList;   
  stringTestList.pop(strdel);
  std::cout << stringTestList;   


  SUStackList<std::string> stringCCList(stringTestList);
  std::cout << "Adding 1 Object" << std::endl;
  stringCCList.push("string 5");
  std::cout << stringCCList;   


  std::cout << "LHS:" << std::endl;
  std::cout << stringTestList;   
  stringTestList = stringCCList;
  std::cout << "RHS:" << std::endl;
  std::cout << stringCCList;   
  std::cout << "LHS After Assignment:" << std::endl;
  std::cout << stringTestList;   


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
  std::cout << intQ;   


  std::cout << "Removing 2 Objects" << std::endl;
  intQ.dequeue(intdel);
  intQ.printQueue();   
  intQ.dequeue(intdel);
  std::cout << intQ;   


  SUQueueArr<int> intCCQ(intQ);
  std::cout << "Adding 1 Object" << std::endl;
  intCCQ.enqueue(5);
  std::cout << intCCQ;   


  std::cout << "LHS:" << std::endl;
  std::cout << intQ;   
  intQ = intCCQ;
  std::cout << "RHS:" << std::endl;
  std::cout << intCCQ;   
  std::cout << "LHS After Assignment:" << std::endl;
  std::cout << intQ;   



  std::cout << "Double: " << std::endl << std::endl;
  std::cout << "Adding 4 Objects:" << std::endl;
  SUQueueArr<double> doubleQ;
  doubleQ.enqueue(1.01);
  doubleQ.enqueue(2.02);
  doubleQ.enqueue(3.03);
  doubleQ.enqueue(4.04);
  std::cout << doubleQ;   


  std::cout << "Removing 2 Objects" << std::endl;
  doubleQ.dequeue(doubledel);
  std::cout << doubleQ;   
  doubleQ.dequeue(doubledel);
  std::cout << doubleQ;   


  SUQueueArr<double> doubleCCQ(doubleQ);
  std::cout << "Adding 1 Object" << std::endl;
  doubleCCQ.enqueue(5.05);
  std::cout << doubleCCQ;   


  std::cout << "LHS:" << std::endl;
  std::cout << doubleQ;   
  doubleQ = doubleCCQ;
  std::cout << "RHS:" << std::endl;
  std::cout << doubleCCQ;   
  std::cout << "LHS After Assignment:" << std::endl;
  std::cout << doubleQ;   



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
  std::cout << pRollQ;   


  std::cout << "Removing 2 Objects" << std::endl;
  pRollQ.dequeue(del);
  std::cout << pRollQ;   
  pRollQ.dequeue(del);
  std::cout << pRollQ;   


  SUQueueList<PayRoll> pRollCCQ(pRollQ);
  std::cout << "Adding 1 Object" << std::endl;
  pRollCCQ.enqueue(e);
  std::cout << pRollCCQ;   


  std::cout << "LHS:" << std::endl;
  std::cout << pRollQ;   
  pRollQ = pRollCCQ;
  std::cout << "RHS:" << std::endl;
  std::cout << pRollCCQ;   
  std::cout << "LHS After Assignment:" << std::endl;
  std::cout << pRollQ;   

  std::cout << "String: " << std::endl << std::endl;
  std::cout << "Adding 4 Objects:" << std::endl;
  SUQueueList<std::string> stringTestQ;
  stringTestQ.enqueue("String 1");
  stringTestQ.enqueue("String 2");
  stringTestQ.enqueue("String 3");
  stringTestQ.enqueue("String 4");
  std::cout << stringTestQ;   


  std::cout << "Removing 2 Objects" << std::endl;
  stringTestQ.dequeue(strdel);
  std::cout << stringTestQ;   
  stringTestQ.dequeue(strdel);
  std::cout << stringTestQ;   


  SUQueueList<std::string> stringCCQ(stringTestQ);
  std::cout << "Adding 1 Object" << std::endl;
  stringCCQ.enqueue("string 5");
  std::cout << stringCCQ;   


  std::cout << "LHS:" << std::endl;
  std::cout << stringTestQ;   
  stringTestQ = stringCCQ;
  std::cout << "RHS:" << std::endl;
  std::cout << stringCCQ;   
  std::cout << "LHS After Assignment:" << std::endl;
  std::cout << stringTestQ;   



  /*
  *---------------
  * SUTree
  *---------------
  */
  std::cout << "===========================" << std::endl;
  std::cout << "|       SUTree Tests      |" << std::endl;
  std::cout << "===========================" << std::endl;


  SUTree<std::string> strBST;
  strBST.insertNode("Dad");
  strBST.insertNode("Chris");
  strBST.insertNode("Jake");
  strBST.insertNode("Blaine");

  SUTree<int> intBST;
  intBST.insertNode(40);
  intBST.insertNode(100);
  intBST.insertNode(50);
  intBST.insertNode(2);
  intBST.insertNode(10);

  std::cout << "Post Order: " << std::endl;
  intBST.displayPostOrder();
  std::cout << "/" << std::endl << std::endl;
  strBST.displayPostOrder();
  std::cout << "/" << std::endl << std::endl;
  std::cout << "Pre Order: " << std::endl;
  intBST.displayPreOrder();
  std::cout << "/" << std::endl << std::endl;
  strBST.displayPreOrder();
  std::cout << "/" << std::endl << std::endl;
  std::cout << "In Order: " << std::endl;
  intBST.displayInOrder();
  std::cout << "/" << std::endl << std::endl;
  strBST.displayInOrder();
  std::cout << "/" << std::endl << std::endl;


  std::cout << "intBST has 40: " <<  intBST.searchNode(40) << std::endl;
  std::cout << "intBST has 20: " <<  intBST.searchNode(20) << std::endl;
  std::cout << "strBST has 'Dad': " << strBST.searchNode("Dad") << std::endl;
  std::cout << "strBST has 'Joe': " << strBST.searchNode("Joe") << std::endl;
 





  return 0;
}
