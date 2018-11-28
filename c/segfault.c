#include <stdio.h>
int main()
{
  int arr[] = {1,2,3,4,5};
  printf("arr [0] is %d\n", arr[0]);
  printf("arr [1] is %d\n", arr[1]);
  printf("arr [2] is %d\n", arr[2]);
  printf("arr [3] is %d\n", arr[3]);
  printf("arr [4] is %d\n", arr[4]);

  // crash segfault
  arr[6] = 7;
  printf("arr [6] is %d\n", arr[6]);
  return 0;
}