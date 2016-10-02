#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

struct heap {
  int max_size;
  int size;
  int *data;
};

void swap(int *a, int *b) {
  int aux = *a;
  *a = *b;
  *b = aux;
}

Heap* create_heap(int size) {
  Heap *heap = malloc(sizeof(Heap));
  heap->data = malloc(sizeof(int) * size);
  heap->max_size = size;
  heap->size = 0;

  return heap;
}

int get_parent_index(Heap *heap, int i) {
  return i/2;
}

int get_left_index(Heap *heap, int i) {
  return 2*i;
}

int get_right_index(Heap *heap, int i) {
  return 2*i + 1;
}

int value_of(Heap *heap, int i) {
  return heap->data[i];
}

void enqueue(Heap *heap, int value) {
  if (heap->size >= heap->max_size) {
    printf("Heap is full!");
  } else {
    heap->data[++heap->size] = value;
    int key_index = heap->size;
    int parent_index = get_parent_index(heap, heap->size);

    while (parent_index >= 1 && heap->data[key_index] > heap->data[parent_index]) {
      swap(&heap->data[key_index], &heap->data[parent_index]);
      key_index = parent_index;
      parent_index = get_parent_index(heap, key_index);
    }
  }
}

int dequeue(Heap *heap) {
  int value = heap->data[1];

  heap->data[1] = heap->data[heap->size];
  heap->size--;
  max_heapify(heap, 1);

  return value;
}

void max_heapify(Heap *heap, int i) {
  int largest;
  int left_index = get_left_index(heap, i);
  int right_index = get_right_index(heap, i);

  if (left_index <= heap->size && heap->data[left_index] > heap->data[i])
    largest = left_index;
  else
    largest = i;

  if (right_index <= heap->size && heap->data[right_index] > heap->data[largest])
    largest = right_index;

  if (heap->data[i] != heap->data[largest]) {
    swap(&heap->data[i], &heap->data[largest]);
    max_heapify(heap, largest);
  }
}
