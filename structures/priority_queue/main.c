#include <stdio.h>
#include <stdlib.h>
#include "priority_queue.h"

int main() {
  PriorityQueue* pqueue = create_priority_queue();

  enqueue(pqueue, 12, 3);
  enqueue(pqueue, 13, 2);
  enqueue(pqueue, 14, 100);
  enqueue(pqueue, 15, 10);


  print_priority_queue(pqueue);

  printf("Maximun %d\n", maximum(pqueue));

  dequeue(pqueue);
  dequeue(pqueue);

  printf("Maximun %d\n", maximum(pqueue));

  dequeue(pqueue);
  dequeue(pqueue);

  print_priority_queue(pqueue);

  return 0;
}
