#include <stdio.h>

int linearSearch(int *arr, int size, int key)
{
  for (int i = 0; i < size; i++)
  {
    if (*arr == key)
    {
      return i;
    }
    arr++;
  }
  return -1;
}

int main()
{
  int size, key;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the elements of the array:\n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Enter the element to search: ");
  scanf("%d", &key);

  int result = linearSearch(arr, size, key);

  if (result != -1)
  {
    printf("%d found at index %d\n", key, result);
  }
  else
  {
    printf("%d not found in the array\n", key);
  }

  return 0;
}
