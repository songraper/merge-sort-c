#include <stdio.h>
#include <stdlib.h>
#include "merge_sort.h"

int main(int argc, char const *argv[])
{
  merge_sort_test();
  merge_test();
  return 0;
}

void merge_test()
{
  int test_data[5] = {-9, 2, 5, 3, 4};
  int result[5] = {-9, 2, 3, 4, 5};

  merge(test_data, 0, 2, 5);

  for (int i = 0; i < 5; i++)
  {
    if (test_data[i] != result[i])
    {
      printf("Wrong\n");
    }

    else
    {
      printf("Right\n");
    }
  }
}

void merge_sort_test()
{
  int test_data[5] = {2, 5, 3, 4, -9};
  int result[5] = {-9, 2, 3, 4, 5};

  merge_sort(test_data, 0, 4);
  for (int i = 0; i < 5; i++)
  {
    if (test_data[i] != result[i])
    {
      printf("Wrong\n");
    }

    else
    {
      printf("Right\n");
    }
  }
}
