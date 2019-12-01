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
SUTree<DataType>* SUTree<DataType>::preOrderSearch(const DataType& d) //preOrder searches tree
{
  if(root->data = d)
    return root;
  preOrderSearch(root->left);
  preOrderSearch(root->right);
  SUTree<DataType>::TreeNode* newNode;
  return newNode;
}

template <class DataType>
SUTree<DataType>* SUTree<DataType>::inOrderSearch(const DataType& d) //inOrder searches tree
{
  preOrderSearch(root->left);
  if(root->data = d)
    return root;
  preOrderSearch(root->right);
  SUTree<DataType>::TreeNode* newNode;
  return newNode;
}

template <class DataType>
SUTree<DataType>* SUTree<DataType>::postOrderSearch(const DataType& d) //postOrder searches tree
{
  preOrderSearch(root->left);
  preOrderSearch(root->right);
  if(root->data = d)
    return root;
  SUTree<DataType>::TreeNode* newNode;
  return newNode;
}

template <class DataType>
void SUTree<DataType>::remove(DataType& d) //unfinished
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
