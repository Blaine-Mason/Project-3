#include "SUQueue.h"
#include <iostream>

template <class DataType>
SUQueueArr<DataType>::SUQueueArr(){ // Constructor
	capacity = 50;
	front = 0;
	rear = 0;
	arr = new DataType[capacity];
}

template <class DataType>
SUQueueArr<DataType>::SUQueueArr(const SUQueueArr &rhs){ // Copy Constructor
	capacity = rhs.capacity ;
	front = rhs.front;
	rear = rhs.rear;
	arr = new DataType[capacity];
	for(int i = 0; i < capacity; i++){
		arr[i] = rhs.arr[i];
	}
}

template <class DataType>
SUQueueArr<DataType>::~SUQueueArr(){ // Destructor
	delete[] arr;
}

template <class DataType>
int SUQueueArr<DataType>::size() const{ // get the number of elements in the queue
	return rear + 1;
}

template <class DataType>
bool SUQueueArr<DataType>::isEmpty() const{ // Check if the queue is empty
	return size() == 0;
}

template <class DataType>
void SUQueueArr<DataType>::enqueue(const DataType& d){ // Enqueues some data
	if(rear > capacity){
		std::cout << "Full" << std::endl;
		return;
	}else{
		arr[rear] = d;
		rear++;
	}
	return;
}

template <class DataType>
void SUQueueArr<DataType>::dequeue(DataType& d){ // Get the front element and store it
	if(rear > 0){
		d = arr[front];
		for(int i = 0; i < rear - 1; i++){
			arr[i] = arr[i + 1];
		}
		rear--;
	}
	return;
}

template <class DataType>
void SUQueueArr<DataType>::printQueue() const{ // Prints the queue from the front to the rear
	if(front == rear){
		std::cout << "Queue is Empty" << std::endl;
		return;
	}else{
		std::cout << "Queue: ";
		for(int i = 0; i < rear; i++){
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
		return;
	}
}

template <class DataType>
SUQueueArr<DataType>& SUQueueArr<DataType>::operator=(const SUQueueArr<DataType>& rhs){ // Assignment operator
	delete[] arr;
	capacity = rhs.capacity;
	arr = new DataType[capacity];
	front = rhs.front;
	rear = rhs.rear;
	for(int i = 0; i < capacity; i++){
		arr[i] = rhs.arr[i];
	}
	return *this;
}



template <class DataType>
SUQueueList<DataType>::SUQueueList(){ // Constructor

}

template <class DataType>
SUQueueList<DataType>::SUQueueList(const SUQueueList &){ // Copy Constructor

}

template <class DataType>
SUQueueList<DataType>::~SUQueueList(){ // Destructor

}

template <class DataType>
int SUQueueList<DataType>::size() const{ // get the number of elements in the queue
	return list.size();
}

template <class DataType>
bool SUQueueList<DataType>::isEmpty() const{ // Check if the queue is empty
	return list.size() == 0;
}

template <class DataType>
void SUQueueList<DataType>::enqueue(const DataType& d){ // Enqueues some data
	std::cout << "Enqueuing " << d << "..." << std::endl;
	list.putBack(d);
}

template <class DataType>
void SUQueueList<DataType>::dequeue(DataType& d){ // Get the front element and store it
	if(!isEmpty())
		d = list.getFront();
		std::cout << "Dequeuing " << d << "..." << std::endl;
	return;
}

template <class DataType>
void SUQueueList<DataType>::printQueue() const{ // Prints the queue from the front to the rear
	if(isEmpty()){
		std::cout << "Queue is Empty" << std::endl;
		return;
	}else{
		list.display();
	}
}
/*
template <class DataType>
SUQueueList<DataType>& SUQueueList<DataType>::operator=(const SUQueueList<DataType>&){ // Assignment operator

}
*/
