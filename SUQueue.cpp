#include "SUQueue.h"
#include <iostream>

template <class DataType>
SUQueueArr<DataType>::SUQueueArr(){ // Constructor
	capacity = 3;
	front = 0;
	rear = 0;
	arr = new DataType[capacity];
}

template <class DataType>
SUQueueArr<DataType>::SUQueueArr(const SUQueueArr &rhs){ // Copy Constructor
	capacity = rhs.capacity ;
	front = rhs.front;
	rear = rhs.rear;
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
		for(int i = 0; i < rear; i++){
			std::cout << arr[i] << std::endl;
		}
		return;
	}
}

template <class DataType>
SUQueueArr<DataType>& SUQueueArr<DataType>::operator=(const SUQueueArr<DataType>&){ // Assignment operator

}



template <class DataType>
SUQueueList<DataType>::SUQueueList(){ // Constructor

}

template <class DataType>
SUQueueList<DataType>::SUQueueList(const SUQueueList &){ // Copy Constructor

}

template <class DataType>
SUQueueList<DataType>::~SUQueueList(){ // Destructor @Luke
	auto* crsr = list.head;
	while(crsr)
	{
		list.head = crsr;
		delete list.head;
		crsr = crsr->next;
	}
}

template <class DataType>
int SUQueueList<DataType>::size() const{ // get the number of elements in the queue @Luke
	int count = 0;
	auto* crsr = list.head;
	while(crsr)
	{
		count++;
		crsr = crsr->next;
	}
	return count;
}

template <class DataType>
bool SUQueueList<DataType>::isEmpty() const{ // Check if the queue is empty @Luke
	return !list.head;
}

template <class DataType>
void SUQueueList<DataType>::enqueue(const DataType&){ // Enqueues some data

}

template <class DataType>
void SUQueueList<DataType>::dequeue(DataType&){ // Get the front element and store it

}

template <class DataType>
void SUQueueList<DataType>::printQueue() const{ // Prints the queue from the front to the rear @Luke
	if(!list.head){
		std::cout << "Queue is Empty" << std::endl;
		return;
	}else{
		auto* crsr = list.head;
		while(crsr)
		{
			std::cout << crsr->data << std::endl;
			crsr = crsr->next;
		}
		return;
	}
}

template <class DataType>
SUQueueList<DataType>& SUQueueList<DataType>::operator=(const SUQueueList<DataType>&){ // Assignment operator

}
