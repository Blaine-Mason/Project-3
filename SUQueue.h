#ifndef SUQUEUE_H
#define SUQUEUE_H
#include "SUList.h"

template <class DataType>
class SUQueueArr{
  private:
    DataType* arr; // The array of items
    int capacity; // The size of the current array
    int front; // The location of the front element
    int rear; // The location of the rear element
  public:
    SUQueueArr(); // Constructor
    SUQueueArr(const SUQueueArr &); // Copy Constructor
    ~SUQueueArr(); // Destructor
    int size() const; // get the number of elements in the queue
    bool isEmpty() const; // Check if the queue is empty
    void enqueue(const DataType&); // Enqueues some data
    void dequeue(DataType&); // Get the front element and store it
    void printQueue() const; // Prints the queue from the front to the rear
    SUQueueArr<DataType>& operator=(const SUQueueArr<DataType>&); // Assignment operator
};

template <class DataType>
class SUQueueList{
  private:
    SUList<DataType> list;
  public:
    SUQueueList(); // Constructor
    SUQueueList(const SUQueueList &); // Copy Constructor
    ~SUQueueList(); // Destructor
    int size() const; // get the number of elements in the queue
    bool isEmpty() const; // Check if the queue is empty
    void enqueue(const DataType&); // Enqueues some data
    void dequeue(DataType&); // Get the front element and store it
    void printQueue() const; // Prints the queue from the front to the rear
    SUQueueList<DataType>& operator=(const SUQueueList<DataType>&); // Assignment operator
};

#endif
