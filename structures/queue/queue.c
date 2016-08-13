#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

typedef struct node Node;
struct node {
  int item;
  Node* next_node;
};

struct queue {
  Node *first;
};

Queue* create_queue() {
  Queue *queue = (Queue*) malloc(sizeof(Queue));
  queue->first = NULL;

  return queue;
}

void enqueue(Queue *queue, int item) {
  Node *new_node = (Node*) malloc(sizeof(Node));
  new_node->item = item;
  new_node->next_node = queue->first;

  queue->first = new_node;
}

int dequeue(Queue *queue) {
  int dequeued_item;
  if(queue->first == NULL) {
    printf("Empty Queue!\n");
    return -1;
  } else {
    dequeued_item = queue->first->item;
  }

  Node* dequeued = queue->first;
  queue->first = queue->first->next_node;

  free(dequeued);
  return dequeued_item;
}

int is_empty(Queue *queue) {
  return (queue == NULL);
}
