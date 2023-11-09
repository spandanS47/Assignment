#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int size)
{
  int *temp = arr1;
  arr1 = arr2;
  arr2 = temp;
}

int main()
{
  int size;

  printf("Enter the size of the arrays: ");
  scanf("%d", &size);

  int array1[size];
  int array2[size];

  printf("Enter the elements of Array 1: ");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &array1[i]);
  }

  printf("Enter the elements of Array 2: ");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &array2[i]);
  }

  printf("Before swapping:\n");
  printf("Array 1: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array1[i]);
  }
  printf("\n");

  printf("Array 2: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array2[i]);
  }
  printf("\n");

  swapArrays(array1, array2, size);

  printf("\nAfter swapping:\n");
  printf("Array 1: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array1[i]);
  }
  printf("\n");

  printf("Array 2: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array2[i]);
  }
  printf("\n");

  return 0;
}
