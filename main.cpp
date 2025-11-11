// bubblesort
void sort(int size, int array[] );


int main(){

  int array[] =  {10, 3, 4, 7, 8, 9, 1, 6, 5, 2,};
  int size = sizeof(array)/sizeof(array[0]);

  sort(size, array);

  for(int element : array){
      std::cout << element << " ";

  }

  return 0;
}


void sort(int size, int array[]){
    int temp;
    for(int i = 0; i < size - 1; i++){
      for(int j = 0; j < size - i - 1; j++){
        if(array[j] > array[j + 1 ]){
            temp = array[j];
              array[j] = array[j+1];
                array[j +1 ] = temp;
        }
      }
    }

