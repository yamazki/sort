//ポインタ渡しバブルソート
int* bubbleSort(int* array, int arrayLength) {
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
