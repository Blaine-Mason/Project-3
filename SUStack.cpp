#include "SUStack.h"
template <class DataType>
SUStackArr<DataType>::SUStackArr(){ // Constructor
  capacity = 0;
  top = 0;
  arr = new DataType[capacity];
}

template <class DataType>
SUStackArr<DataType>::SUStackArr(const SUStackArr& rhs){ // Copy Constructor
    
}

template <class DataType>
SUStackArr<DataType>::~SUStackArr(){ // Destructor

}

template <class DataType>
int SUStackArr<DataType>::size() const{ // get the number of elements in the stack

}

template <class DataType>
bool SUStackArr<DataType>::isEmpty() const{ // Check if the stack is empty

}

template <class DataType>
void SUStackArr<DataType>::push(const DataType&){ // Pushes an object onto the stack

}

template <class DataType>
void SUStackArr<DataType>::pop(DataType&){ // Pop an object off the stack and store it

}

template <class DataType>
void SUStackArr<DataType>::printStack() const{ // Prints the stack from the top, down

}

template <class DataType>
SUStackArr<DataType>& SUStackArr<DataType>::operator=(const SUStackArr<DataType>&){ // Assignment operator

}






template <class DataType>
SUStackList<DataType>::SUStackList(){ // Constructor

}

template <class DataType>
SUStackList<DataType>::SUStackList(const SUStackList &){ // Copy Constructor

}

template <class DataType>
SUStackList<DataType>::~SUStackList(){ // Destructor

}

template <class DataType>
int SUStackList<DataType>::size() const{ // get the number of elements in the stack

}

template <class DataType>
bool SUStackList<DataType>::isEmpty() const{ // Check if the stack is empty

}

template <class DataType>
void SUStackList<DataType>::push(const DataType&){ // Pushes an object onto the stack

}

template <class DataType>
void SUStackList<DataType>::pop(DataType&){ // Pop an object off the stack and store it

}

template <class DataType>
void SUStackList<DataType>::printStack() const{ // Prints the stack from the top, down

}

template <class DataType>
SUStackList<DataType>& SUStackList<DataType>::operator=(const SUStackList<DataType>&){ // Assignment operator

}
