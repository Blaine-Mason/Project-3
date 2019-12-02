#ifndef SUTREE_H
#define SUTREE_H

//Bibliography:
//The Book.
template <class DataType>
class SUTree{
private:
  struct TreeNode{
    DataType data;
    TreeNode* left;
    TreeNode* parent;
    TreeNode* right;
  };
  TreeNode* root;
  void displayInOrder(TreeNode*) const;
  void displayPreOrder(TreeNode*) const;
  void displayPostOrder(TreeNode*) const;
public:
  SUTree();
  ~SUTree();
  void insert(TreeNode*&, TreeNode*&);
  void insertNode(const DataType&);
  bool searchNode(DataType);
  void remove(DataType&);
  void destroySubTree(TreeNode*);
  void deleteNode(DataType, TreeNode *&);
  void makeDeletion(TreeNode *&);
  void displayInOrder() const{
    displayInOrder(root);
  }
  void displayPreOrder() const{
    displayPreOrder(root);
  }
  void displayPostOrder() const{
    displayPostOrder(root);
  }

};
#include "SUTree.cpp"
#endif
