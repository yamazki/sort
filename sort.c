#include <stdlib.h>
void copyIntArray(int* source, int* destination, int length);

//$B$b$H$NG[Ns$NCM$rJQ99$9$k%P%V%k%=!<%H(B
int* bubbleSort1(int* array, int arrayLength) {
  for(int i = arrayLength; 0 < i; i--) {
    for(int j = 0; j < i-1; j++) {
      if(array[j] > array[j+1]) {
        int tmp;
        tmp = array[j];
        array[j] = array[j+1];
        array[j+1] = tmp;
      }
    }
  }
  return array;
}

//$B?7$7$/NN0h$r3NJ]$9$k%P%V%k%=!<%H(B
int* bubbleSort2(int* array, int arrayLength) {
  int* sortedArray;
  sortedArray = (int*)calloc(arrayLength, sizeof(int));
  copyIntArray(array, sortedArray, arrayLength);
  bubbleSort1(sortedArray, arrayLength);
  return sortedArray;
}

void copyIntArray(int* source, int* destination, int length) {
  for(int i = 0; i < length; i++) {
    destination[i] = source[i];
    }
 }
