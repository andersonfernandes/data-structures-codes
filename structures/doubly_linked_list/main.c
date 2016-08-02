#include <stdio.h>
#include <stdlib.h>
#include "doubly_linked_list.h"

int main() {
  Node *list = create_doubly_linked_list();
  Node *last;

  printf("The list is empty? %d\n", is_empty(list));

  printf("Adding elements ...\n");

  list = insert_node(list, 12);
  last = list;
  list = insert_node(list, 24);
  list = insert_node(list, 48);
  list = insert_node(list, 96);

  printf("The list is empty? %d\n", is_empty(list));

  printf("List state: ");
  print_doubly_linked_list_forward(list);
  printf("\n");

  remove_node(list, 48);

  printf("List state after remove 48: ");
  print_doubly_linked_list_forward(list);
  printf("\n");

  printf("List backwards: ");
  print_doubly_linked_list_backward(last);
  printf("\n");

  free(list);
  return 0;
}
