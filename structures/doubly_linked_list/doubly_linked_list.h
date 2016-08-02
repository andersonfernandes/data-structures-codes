#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

  typedef struct node Node;

  Node* create_doubly_linked_list();

  Node* insert_node(Node *first, int item);

  Node* search(Node *first, int item);

  Node* remove_node(Node *first, int item);

  int is_empty(Node *first);

  void print_doubly_linked_list_forward(Node *first);

  void print_doubly_linked_list_backward(Node *last);

#endif /* DOUBLY_LINKED_LIST_H */
