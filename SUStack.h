#ifndef SUSTACK_H
#define SUSTACK_H
#include "SUList.h"

template <class DataType>
class SUStackArr{
  private:
    DataType* arr; // The array of items
    int capacity; // The size of the current array
    int top; // The location of the top element
    DataType* copyArr(DataType*, int, int);
  public:
    SUStackArr(); // Constructor
    SUStackArr(const SUStackArr &); // Copy Constructor
    ~SUStackArr(); // Destructor
    int size() const; // get the number of elements in the stack
    bool isEmpty() const; // Check if the stack is empty
    void push(const DataType&); // Pushes an object onto the stack
    void pop(DataType&); // Pop an object off the stack and store it
    void printStack() const; // Prints the stack from the top, down
    SUStackArr<DataType>& operator=(const SUStackArr<DataType>&); // Assignment operator
    friend std::ostream& operator<<(std::ostream &out, const SUStackArr<DataType>& d){
        std::cout << "Stack: " << std::endl;
        for(int i = 0; i < d.capacity; i++){
            out << d.arr[i] << std::endl;
        }
            out << std::endl;
            return out;
    }
};

template <class DataType>
class SUStackList{
  private:
    SUList<DataType> list;
  public:
    SUStackList(); // Constructor
    SUStackList(const SUStackList &); // Copy Constructor
    ~SUStackList(); // Destructor
    int size() const; // get the number of elements in the stack
    bool isEmpty() const; // Check if the stack is empty
    void push(const DataType&); // Pushes an object onto the stack
    void pop(DataType&); // Pop an object off the stack and store it
    void printStack() const; // Prints the stack from the top, down
    friend std::ostream& operator<<(std::ostream &out, const SUStackList<DataType>& d){
        d.printStack();
        return out;
    }
};
#include "SUStack.cpp"
#endif
