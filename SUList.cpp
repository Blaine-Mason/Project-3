#include "SUList.h"

template <class DataType>
SUList<DataType>::SUList(){ // Default ctor
	head = nullptr;
	tail = nullptr;
}

template <class DataType>
SUList<DataType>::SUList(const SUList&){ // Copy ctor

}

template <class DataType>
SUList<DataType>::~SUList(){ // Destructor
	ListNode* crsr = head;
	while(crsr){
		ListNode* temp = crsr->next;
		delete crsr;
		crsr = temp;
		
	}
}

template <class DataType>
DataType SUList<DataType>::getFront(){// Remove & return the front
	ListNode* temp = head;
	DataType t = head->data;
	head = head->next;
	delete temp;
	return t;
}

template <class DataType>
DataType SUList<DataType>::getBack(){ // Remove & return the back
	ListNode* crsr = head;
	while(crsr->next){
		crsr = crsr->next;
	}
	ListNode* temp = tail;
	DataType t = tail->data;
	tail = crsr;
	delete temp;
	return t;
}

template <class DataType>
void SUList<DataType>::putFront(const DataType& d){// Add to the front
	ListNode* nNode = new ListNode;
	nNode->data = d;
	if(!head){
		head = nNode;
		nNode->next = nullptr;
	}else{
		nNode->next = head;
		head = nNode;
	}
	ListNode* crsr = head;
	while(crsr->next){
		crsr = crsr->next;
	}
	tail = crsr;
}

template <class DataType>
void SUList<DataType>::putBack(const DataType& d){ // Add to the back
	ListNode* nNode = new ListNode;
	nNode->data = d;
	nNode->next = nullptr;
	if(!tail){
		tail = nNode;
	}else{
		tail->next = nNode;
		tail = nNode;
	}
}

template <class DataType>
int SUList<DataType>::size() const{ // Returns the number of elements
	ListNode* crsr = head;
	int count = 0;
	while(crsr){
		count++;
		crsr = crsr->next;
	}
	return count;
}

template <class DataType>
bool SUList<DataType>::contains(const DataType& d){// Tests for membership
	ListNode* crsr = head;
	while(crsr){
		if(crsr->data == d){
			return true;
		}else{
			crsr = crsr->next;
		}
	}
	return false;
}

template <class DataType>
SUList<DataType>& SUList<DataType>::operator=(const SUList<DataType>&){ // Overloaded assignment

}

template <class DataType>
void SUList<DataType>::display(){
	ListNode* crsr = head;
	while(crsr){
		std::cout << crsr->data << std::endl;
		crsr = crsr->next;
	}
}
