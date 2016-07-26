#include <stdio.h>
#include "util.c"
#define MAX 10

void bubblesort(int *v, int size) {
  int i, j;

  for(i = 0; i < size; ++i) {
    for(j = 0; j < size-i; ++j) {
      if(v[j] > v[j+1]) swap(&v[j], &v[j+1]);
    }
  }
}

int main() {
  int v[MAX] = { 3, 6, 8, 10, 45, 2, 1, 90, 6, 12 };
  int i;

  printf("Before: "); print_array(v, MAX);

  bubblesort(v, MAX);

  printf("After:  "); print_array(v, MAX);

  return 0;
}
