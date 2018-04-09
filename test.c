#include <stdio.h>
#include "sort.h"
#define ARRAY_LENGTH 10

int main(void) {
  int array[ARRAY_LENGTH] = {31,11,12,12,12,12,12,34,2,12};
  int* sortedArray;
  sortedArray = bubbleSort2(array, ARRAY_LENGTH);
  
  //ソートされた配列表示
  for(int i = 0; i < ARRAY_LENGTH; i++) {
    printf("%d\n",sortedArray[i]);
  }
  
  return 0;
}
  
