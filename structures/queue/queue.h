#ifndef QUEUE_H
#define QUEUE_H

  typedef struct queue Queue;

  Queue* create_queue();

  void enqueue(Queue *queue, int item);

  int dequeue(Queue *queue);

  int is_empty(Queue *queue);

#endif /* QUEUE_H */
