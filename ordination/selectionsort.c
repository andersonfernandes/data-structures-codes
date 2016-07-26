#include <stdio.h>
#include "util.c"
#define MAX 10

void selectionsort(int *v, int size) {
  int i, j, min;

  for(i = 0; i < size; ++i) {
    min = i;

    for(j = i+1; j < size; ++j)
      if(v[j] < v[min]) min = j;

    swap(&v[i], &v[min]);
  }
}

int main() {
  int v[MAX] = { 3, 6, 8, 10, 45, 2, 1, 90, 6, 12 };
  int i;

  printf("Before: "); print_array(v, MAX);

  selectionsort(v, MAX);

  printf("After:  "); print_array(v, MAX);

  return 0;
}

