#ifndef LINKED_LIST_H
#define LINKED_LIST_H

  typedef struct node Node;

  Node* create_linked_list();

  Node* insert_node(Node *first, int item);

  Node* remove_node(Node *first, int item);

  int is_empty(Node *first);

  Node* search_node(Node *first, int item);

  void print_linked_list(Node *first);

#endif /* LINKED_LIST_H */
