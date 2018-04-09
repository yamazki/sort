#include <stdlib.h>
void copyIntArray(int* source, int* destination, int length);

//もとの配列の値を変更するバブルソート
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


//新しく領域を確保するバブルソート
int* bubbleSort2(int* array, int arrayLength) {
  int* sortedArray;
  sortedArray = (int*)calloc(arrayLength, sizeof(int));
  copyIntArray(array, sortedArray, arrayLength);
  for(int i = arrayLength; 0 < i; i--) {
    for(int j = 0; j < i-1; j++) {
      if(sortedArray[j] > sortedArray[j+1]) {
        int tmp;
        tmp = sortedArray[j];
        sortedArray[j] = sortedArray[j+1];
        sortedArray[j+1] = tmp;
      }
    }
  }
  return sortedArray;
}


void copyIntArray(int* source, int* destination, int length) {
  for(int i = 0; i < length; i++) {
    destination[i] = source[i];
    }
 }
