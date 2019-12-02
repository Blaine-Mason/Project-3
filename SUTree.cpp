#include <iostream>
#include "SUTree.h"

template <class DataType>
SUTree<DataType>::SUTree()
{
  root = nullptr;
}

template <class DataType>
SUTree<DataType>::~SUTree()
{
  destroySubTree(root);
}

template <class DataType>
void SUTree<DataType>::insert(TreeNode*& nodeptr, TreeNode*& newNode){
  if(nodeptr == nullptr){
    nodeptr = newNode;
  }else if(newNode->data < nodeptr->data){
    insert(nodeptr->left, newNode);
  }else{
    insert(nodeptr->right, newNode);
  }
}
template <class DataType>
void SUTree<DataType>::insertNode(const DataType& d)
{
  TreeNode* newNode = nullptr;

  newNode = new TreeNode;
  newNode->data = d;
  newNode->left = newNode->right = nullptr;

  insert(root, newNode);
}

template <class DataType>
bool SUTree<DataType>::searchNode(DataType item){
  TreeNode *nodePtr = root;

  while(nodePtr){
    if(nodePtr->data == item){
      return true;
    }else if (item < nodePtr->data){
      nodePtr = nodePtr->left;
    }else{
      nodePtr = nodePtr->right;
    }
  }
  return false;
}

template <class DataType>
void SUTree<DataType>::remove(DataType& d)
{
  deleteNode(d, root);
}

template <class DataType>
void SUTree<DataType>::destroySubTree(TreeNode* nodePtr)
{
  if(nodePtr)
  {
    if(nodePtr->left)
      destroySubTree(nodePtr->left);
    if(nodePtr->right)
      destroySubTree(nodePtr->right);
    delete nodePtr;
  }
}

template <class DataType>
void SUTree<DataType>::deleteNode(DataType item, TreeNode*& nodePtr)
{
  if(item < nodePtr->value)
    deleteNode(item, nodePtr->left);
  else if(item > nodePtr->value)
    deleteNode(item, nodePtr->right);
  else
    makeDeletion(nodePtr);
}

template <class DataType>
void SUTree<DataType>::makeDeletion(TreeNode*& nodePtr)
{
  TreeNode *tempNodePtr = nullptr;

  if(nodePtr == nullptr)
    std::cout << "Cannot delete empty node.\n";
  else if(nodePtr->right == nullptr)
  {
    tempNodePtr = nodePtr;
    nodePtr = nodePtr->left;
    delete tempNodePtr;
  }
  else if(nodePtr->left == nullptr)
  {
    tempNodePtr = nodePtr;
    nodePtr = nodePtr->right;
    delete tempNodePtr;
  }
  else
  {
    tempNodePtr = nodePtr->right;
    while(tempNodePtr->left)
      tempNodePtr = tempNodePtr->left;
    tempNodePtr->left = nodePtr->left;
    tempNodePtr = nodePtr;
    nodePtr = nodePtr->right;
    delete tempNodePtr;
  }
}

template <class DataType>
void SUTree<DataType>::displayInOrder(TreeNode* nodePtr) const{
  if(nodePtr){  
    displayInOrder(nodePtr->left);
    std::cout << nodePtr->data << "->";
    displayInOrder(nodePtr->right);
  }
}

template <class DataType>
void SUTree<DataType>::displayPreOrder(TreeNode* nodePtr) const{
  if(nodePtr){
    std::cout << nodePtr->data << "->";
    displayPreOrder(nodePtr->left);
    displayPreOrder(nodePtr->right);
  }
}

template <class DataType>
void SUTree<DataType>::displayPostOrder(TreeNode* nodePtr) const{
  if(nodePtr){
    displayPostOrder(nodePtr->left);
    displayPostOrder(nodePtr->right);
    std::cout << nodePtr->data << "->";
  }
}

