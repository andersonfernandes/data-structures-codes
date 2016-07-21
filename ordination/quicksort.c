#include <stdio.h>
#define MAX 10

void swap(int *a, int *b);
void quicksort(int *v, int size);
void print_array(int *v, int size);

int main() {
  int v[MAX] = { 3, 6, 8, 10, 45, 2, 1, 90, 6, 12 };
  int i;

  printf("Before: "); print_array(v, MAX);

  quicksort(v, MAX);

  printf("After:  "); print_array(v, MAX);

  return 0;
}


void quicksort(int *v, int size) {
  if(size <= 1) return;

  int pivot = v[size / 2];
  int left = 0, right = size - 1;

  while(left <= right) {
    while(v[left] <= pivot) ++left;
    while(v[right] > pivot) --right;

    if(left < right) swap(&v[left], &v[right]);
  }

  quicksort(v, right);
  quicksort(v+left, size-left);
}

void swap(int *a, int *b) {
  int aux = *a;
  *a = *b;
  *b = aux;
}

void print_array(int *v, int size) {
  int i;
  for(i = 0; i < size; ++i) {
    printf("%d ", v[i]);
  }
  printf("\n");
}
