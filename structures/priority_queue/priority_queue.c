#include <stdio.h>
#include <stdlib.h>
#include "priority_queue.h"

struct node {
  int item;
  int priority;
  Node *next_node;
};

struct pqueue {
  Node *first;
};

PriorityQueue* create_priority_queue() {
  PriorityQueue *pqueue = (PriorityQueue*) malloc(sizeof(PriorityQueue));
  pqueue->first = NULL;

  return pqueue;
}

int is_empty(PriorityQueue *pqueue) {
  return (pqueue->first == NULL);
}

PriorityQueue* enqueue(PriorityQueue *pqueue, int item, int priority) {
  Node *new_node = (Node*) malloc(sizeof(Node));
  new_node->item = item;
  new_node->priority = priority;

  if (is_empty(pqueue) || (priority > pqueue->first->priority)) {
    new_node->next_node = pqueue->first;
    pqueue->first = new_node;
  } else {
    Node *current = pqueue->first;

    while ((current->next_node != NULL) && (current->next_node->priority > priority)) {
      current = current->next_node;
    }

    new_node->next_node = current->next_node;
    current->next_node = new_node;
  }

  return pqueue;
}

Node* dequeue(PriorityQueue *pqueue) {
  if (!is_empty(pqueue)) {
    Node *dequeued = pqueue->first;

    pqueue->first = dequeued->next_node;
    dequeued->next_node = NULL;

    return dequeued;
  } else {
    printf("Empty priority queue!\n");
    return NULL;
  }
}

int maximum(PriorityQueue *pqueue) {
  if(!is_empty(pqueue)) {
    return pqueue->first->item;
  } else {
    printf("Empty priority queue!\n");
    return -1;
  }
}

void print_priority_queue(PriorityQueue *pqueue) {
  if(is_empty(pqueue)) {
    printf("Empty priority queue!\n");
  } else {
    Node *node;

    for(node = pqueue->first; node != NULL; node = node->next_node) {
      printf("Priority: %d - Item: %d\n", node->priority, node->item);
    }
  }
}
