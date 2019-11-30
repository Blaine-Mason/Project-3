#ifndef SUTREE_H
#define SUTREE_H

template <class DataType>
class SUTree{
//private:
  struct TreeNode{
    DataType data;
    TreeNode* left;
    TreeNode* parent;
    TreeNode* right;
  };
  TreeNode* root;
//public:
  SUTree();
  ~SUTree();
  SUTree(const SUTree&);
  SUTree<DataType>& operator=(const SUTree<DataType>&);
  void insert(TreeNode *&nodeptr, TreeNode *&newNode);
  void insertNode(const DataType&);
  TreeNode* preOrderSearch(const DataType&);
  TreeNode* inOrderSearch(const DataType&);
  TreeNode* postOrderSearch(const DataType&);
  void remove(DataType&);
};

#endif
