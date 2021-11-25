#include <stdio.h>
#include <limits>

void sortBySelection(int array[], int length);
void print(int array[], int length);

int main(void)
{
  int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
  int length = sizeof(array) / sizeof(int);
  sortBySelection(array, length);
  print(array, length);
  return 0;
}

void sortBySelection(int array[], int length)
{
  int min, minIndex, temp;

  for (int i = 0; i < length; i++)
  {
    min = std::numeric_limits<int>::max();
    for (int j = i; j < length; j++)
    {
      if (min >= array[j])
      {
        min = array[j];
        minIndex = j;
      }
    }
    temp = array[i];
    array[i] = array[minIndex];
    array[minIndex] = temp;
  }
}

void print(int array[], int length)
{
  for (int i = 0; i < length; i++)
  {
    printf("%d ", array[i]);
  }
}