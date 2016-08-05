#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

int main() {
  Stack *stack = create_stack();

  printf("The stack is empty? %d\n", is_empty(stack));

  push(stack, 14);
  push(stack, 16);
  push(stack, 18);
  push(stack, 20);

  printf("Current Stack: |20, 18, 16, 14|\n\n" );

  printf("Pop current top: %d\n", pop(stack));
  printf("Peek current top: %d\n", peek(stack));
  printf("\n");
  printf("Pop current top: %d\n", pop(stack));
  printf("Peek current top: %d\n", peek(stack));

  return 0;
}
