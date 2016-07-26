#include <stdio.h>

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
