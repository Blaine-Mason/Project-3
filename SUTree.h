#ifndef SUTREE_H
#define SUTREE_H

template class<DataType>
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
  SUTree(const SUTree&);
  SUTree<DataType>& operator=(const SUTree<DataType>&);
  insert(const DataType&);
  preOrderSearch(const DataType&);
  inOrderSearch(const DataType&);
  postOrderSearch(const DataType&);
  delete(DataType&);
};

#endif
