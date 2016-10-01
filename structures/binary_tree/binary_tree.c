#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

struct binary_tree {
  int value;
  BinaryTree *left;
  BinaryTree *right;
};

BinaryTree* create_empty_binary_tree() {
  return NULL;
}

BinaryTree* create_binary_tree(int value, BinaryTree *left, BinaryTree *right) {
  BinaryTree *binary_tree = malloc(sizeof(BinaryTree));

  binary_tree->value = value;
  binary_tree->left = left;
  binary_tree->right = right;

  return binary_tree;
}

BinaryTree* add_to_bst(BinaryTree *bt, int value) {
  if (bt == NULL) {
    bt = create_binary_tree(value, NULL, NULL);
  } else if (bt->value > value) {
    bt->left = add(bt->left, value);
  } else {
    bt->right = add(bt->right, value);
  }

  return bt;
}

int is_empty(BinaryTree *bt) {
  return (bt == NULL);
}

void print_in_order(BinaryTree *bt) {
  if(!is_empty(bt)) {
    print_in_order(bt->left);
    printf("%d\n", bt->value);
    print_in_order(bt->right);
  }
}

void print_pre_order(BinaryTree *bt) {
  if(!is_empty(bt)) {
    printf("%d\n", bt->value);
    print_in_order(bt->left);
    print_in_order(bt->right);
  }
}

void print_post_order(BinaryTree *bt) {
  if(!is_empty(bt)) {
    print_in_order(bt->left);
    print_in_order(bt->right);
    printf("%d\n", bt->value);
  }
}
