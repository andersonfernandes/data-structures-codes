#ifndef BINARY_TREE_H
#define BINARY_TREE_H

  typedef struct binary_tree BinaryTree;

  BinaryTree* create_empty_binary_tree();

  BinaryTree* create_binary_tree(int value, BinaryTree *left, BinaryTree *right);

  BinaryTree* add_to_bst(BinaryTree *bt, int value);

  int is_empty(BinaryTree *bt);

  void print_in_order(BinaryTree *bt);

  void print_pre_order(BinaryTree *bt);

  void print_post_order(BinaryTree *bt);

#endif /* BINARY_TREE_H */
