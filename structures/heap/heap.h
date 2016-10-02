#ifndef HEAP_H
#define HEAP_H
  typedef struct heap Heap;

  Heap* create_heap(int size);

  int get_parent_index(Heap *heap, int i);

  int get_left_index(Heap *heap, int i);

  int get_right_index(Heap *heap, int i);

  int value_of(Heap *heap, int i);

  void enqueue(Heap *heap, int value);

  int dequeue(Heap *heap);

  void max_heapify(Heap *heap, int i);

#endif /* HASH_TABLE_H */
