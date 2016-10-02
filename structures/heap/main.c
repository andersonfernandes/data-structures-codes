#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

int main() {
  Heap *h = create_heap(12);

  enqueue(h, 12);
  enqueue(h, 32);
  enqueue(h, 1);
  enqueue(h, 44);
  enqueue(h, 100);

  printf("%d\n", dequeue(h));
  printf("%d\n", dequeue(h));
  printf("%d\n", dequeue(h));
  printf("%d\n", dequeue(h));
  printf("%d\n", dequeue(h));
}
