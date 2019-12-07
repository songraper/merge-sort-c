#include <stdio.h>
#include <stdlib.h>
#include "merge_sort.h"

void merge_sort(int *a, int low, int high)
{
  if (low < high)
  {
    int mid = (low + high) / 2;

    merge_sort(a, low, mid);
    merge_sort(a, mid + 1, high);
    merge(a, low, mid, high);
  }
}

void merge(int *a, int low, int mid, int high)
{
  int i = 0, j = 0, m = 0;
  int *temp = NULL;

  i = low;
  j = mid + 1;
  m = high - low + 1;

  temp = malloc(m * sizeof(int));

  for (int k = 0; k < m; k++)
  {
    if (a[i] < a[j])
    {
      temp[k] = a[i];
      i++;
    }

    else
    {
      temp[k] = a[j];
      j++;
    }

    if (i == mid + 1)
    {
      while (j <= high)
      {
        k++;
        temp[k] = a[j];
        j++;
      }
    }

    if (j == high + 1)
    {
      while (i <= mid)
      {
        k++;
        temp[k] = a[i];
        i++;
      }
    }
  }

  for (int k = 0; k < m; k++)
  {
    a[low + k] = temp[k];
  }

  free(temp);
}
