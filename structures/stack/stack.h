#ifndef STACK_H
#define STACK_H

  typedef struct stack Stack;
  typedef struct node Node;

  struct node {
    int item;
    Node *next_node;
  };

  struct stack {
    Node *top;
  };

  Stack* create_stack();

  void push(Stack *stack, int item);

  int pop(Stack *stack);

  int peek(Stack *stack);

  int is_empty(Stack *stack);

#endif /* STACK_H */
