#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

struct node {
  int item;
  Node *next_node;
};

Node* create_linked_list() {
  return NULL;
}

Node* insert_node(Node *first, int item) {
  Node *new_node = (Node*) malloc(sizeof(Node));
  new_node->item = item;
  new_node->next_node = first;

  return new_node;
}

Node* remove_node(Node *first, int item) {
  Node *prev = NULL;
  Node *curr = first;

  while(curr != NULL && curr->item != item) {
    prev = curr;
    curr = curr->next_node;
  }

  if (curr == NULL) return first;

  if (prev == NULL) first = prev->next_node;
  else prev->next_node = curr->next_node;

  free(curr);
  return first;
}

int is_empty(Node *first) {
  return (first == NULL);
}

Node* search_node(Node *first, int item) {
  Node *node;

  for(node = first; node->next_node != NULL; node = node->next_node) {
    if(node->item == item) return node;
  }

  return NULL;
}

void print_linked_list(Node *first) {
  if(!is_empty(first)) {
    printf("%d ", first->item);

    print_linked_list(first->next_node);
  }
}
