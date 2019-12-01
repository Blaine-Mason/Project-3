#ifndef SUTREE_H
#define SUTREE_H


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
public:
  SUTree();
  ~SUTree();
  void insert(TreeNode*&, TreeNode*&);
  void insertNode(const DataType&);
  SUTree<DataType>* preOrderSearch(const DataType&);
  SUTree<DataType>* inOrderSearch(const DataType&);
  SUTree<DataType>* postOrderSearch(const DataType&);
  void remove(DataType&);
  void destroySubTree(TreeNode*);
  void deleteNode(DataType, TreeNode *&);
  void makeDeletion(TreeNode *&);
};
#include "SUTree.cpp"
#endif
