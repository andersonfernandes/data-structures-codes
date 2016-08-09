#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main() {
  Queue* queue = create_queue();

  enqueue(queue, 12);
  enqueue(queue, 13);
  enqueue(queue, 14);
  enqueue(queue, 15);

  printf("%d\n", dequeue(queue));
  printf("%d\n", dequeue(queue));
  printf("%d\n", dequeue(queue));
  printf("%d\n", dequeue(queue));
  printf("%d\n", dequeue(queue));

  return 0;
}
