#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main() {
  Node *list = create_linked_list();

  printf("The list is empty? %d\n", is_empty(list));

  printf("Adding elements ...\n");

  list = insert_node(list, 12);
  list = insert_node(list, 24);
  list = insert_node(list, 48);
  list = insert_node(list, 96);

  printf("List state: ");
  print_linked_list(list);
  printf("\n");

  remove_node(list, 48);

  printf("List state after remove 48: ");
  print_linked_list(list);
  printf("\n");

  printf("The list is empty? %d\n", is_empty(list));


  free(list);
  return 0;
}
