#include <stdio.h>
#include <stdlib.h>
#include "merge_sort.h"

int main(int argc, char const *argv[])
{
  int n = 0;
  int *a = NULL;

  printf("Enter size of list:\n");
  scanf("%d", &n);

  a = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    printf("Enter numbers %d \n", i + 1);
    scanf("%d", &a[i]);
  }

  merge_sort(a, 0, n - 1);

  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }

  printf("\n");

  free(a);

  return 0;
}
