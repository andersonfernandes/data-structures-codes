#include <stdio.h>
#include "util.c"
#define MAX 10

void insertionsort(int *v, int size) {
  int i, j, key;

  for(i = 1; i < size; ++i) {
    key = v[i];
    j = i - 1;

    while((j >= 0) && (v[j] > key)) {
      v[j+1] = v[j];
      j--;
    }

    v[j+1] = key;
  }
}

int main() {
  int v[MAX] = { 3, 6, 8, 10, 45, 2, 1, 90, 6, 12 };
  int i;

  printf("Before: "); print_array(v, MAX);

  insertionsort(v, MAX);

  printf("After:  "); print_array(v, MAX);

  return 0;
}
