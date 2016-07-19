#include <stdio.h>

void swap(int *a, int *b) {
  int aux = *a;
  *a = *b;
  *b = aux;
}

void quicksort(int *v, int size) {
  if(size <= 1) {
    return;
  } else {
    int pivot = v[size/2];
    int left = 0, right = size-1;

    while(left < right) {
      while(v[left] < pivot) ++left;
      while(v[right] > pivot) --right;

      if(left < right) swap(&v[left], &v[right]);
    }

    quicksort(v, right);
    quicksort(v + left, size - left);
  }
}

int main() {
  int v[10] = { 3, 6, 8, 10, 45, 2, 1, 90, 4, 12 };
  int i;

  quicksort(v, 10);

  for(i = 0; i < 10; ++i) {
    printf(">> %d\n", v[i]);
  }

}
