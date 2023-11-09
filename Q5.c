#include <stdio.h>

int arraySum(int *arr, int size)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    sum += *arr;
    arr++;
  }

  return sum;
}

int main()
{
  int size;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the elements of the array:\n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  int sum = arraySum(arr, size);

  printf("Sum of the elements in the array: %d\n", sum);

  return 0;
}
