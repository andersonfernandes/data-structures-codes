#include <stdio.h>
#include <limits.h>
#include "util.c"
#define MAX 10

void merge(int *v, int start, int mid, int end) {
  int i, j;
  int size = end - start + 1;
  int left = start, right = mid+1;

  int v_aux[size];
  int l_end = 0, r_end = 0;

  for(i = 0; i < size; ++i) {
    if(!l_end && !r_end) {
      if(v[left] < v[right])
        v_aux[i] = v[left++];
      else
        v_aux[i] = v[right++];

      if(left > mid) l_end = 1;
      if(right > end) r_end = 1;
    } else {
      if(!l_end) v_aux[i] = v[left++];
      else v_aux[i] = v[right++];
    }
  }

  for(i = 0, j = start; i < size; ++i, ++j) {
    v[j] = v_aux[i];
  }
}

void mergesort(int *v, int start, int end) {
  if(start < end) {
    int mid = (start + end) / 2;

    mergesort(v, start, mid);
    mergesort(v, mid+1, end);
    merge(v, start, mid, end);
  }
}

int main() {
  int v[MAX] = { 3, 6, 8, 10, 45, 2, 1, 90, 6, 12 };
  int i;

  printf("Before: "); print_array(v, MAX);

  mergesort(v, 0, MAX);

  printf("After:  "); print_array(v, MAX);

  return 0;
}
