#include <iostream>

int main()
{
  int arr[] = {1,2,3,4,5};
  std::printf("arr [0] is %d\n", arr[0]);
  std::printf("arr [1] is %d\n", arr[1]);
  std::printf("arr [2] is %d\n", arr[2]);
  std::printf("arr [3] is %d\n", arr[3]);
  std::printf("arr [4] is %d\n", arr[4]);
  // surprise!!
  std::printf("arr [5] is %d\n", arr[5]);
  return 0;
}

