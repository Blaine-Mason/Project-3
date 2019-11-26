#include "SUTree.h"

template <class DataType>
SUTree<DataType>::SUTree()
{

}

template <class DataType>
SUTree<DataType>::~SUTree()
{

}

template <class DataType>
SUTree<DataType>::SUTree(const SUTree&)
{

}

template <class DataType>
SUTree<DataType>& SUTree<DataType>::operator=(const SUTree<DataType>&)
{

}

template <class DataType>
void SUTree<DataType>::insert(const DataType& d)
{

}

template <class DataType>
typename SUTree<DataType>::TreeNode* SUTree<DataType>::preOrderSearch(const DataType& d) //preOrder searches tree @Luke
{
  if(root->data = d)
    return root;
  preOrderSearch(root->left);
  preOrderSearch(root->right);
  SUTree<DataType>::TreeNode* newNode;
  return newNode;
}

template <class DataType>
typename SUTree<DataType>::TreeNode* SUTree<DataType>::inOrderSearch(const DataType& d) //inOrder searches tree @Luke
{
  preOrderSearch(root->left);
  if(root->data = d)
    return root;
  preOrderSearch(root->right);
  SUTree<DataType>::TreeNode* newNode;
  return newNode;
}

template <class DataType>
typename SUTree<DataType>::TreeNode* SUTree<DataType>::postOrderSearch(const DataType& d) //postOrder searches tree @Luke
{
  preOrderSearch(root->left);
  preOrderSearch(root->right);
  if(root->data = d)
    return root;
  SUTree<DataType>::TreeNode* newNode;
  return newNode;
}

template <class DataType>
void SUTree<DataType>::remove(DataType& d) //unfinished @Luke
{
  SUTree<DataType>::TreeNode* target = preOrderSearch(root);
  //delete target and reconnect BST
}
