#include <iostream>
<<<<<<< HEAD
<<<<<<< HEAD

int search(std::string array [], int size, std::string element);

int main(){

    std::string foods[] = {"burger", "pizza", "tacos", "pancakes", "waffles", "sallad",};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string myFood;

    std::cout << "Enter element to search for: ";
    std::getline(std::cin, myFood);

    index = search(foods, size, myFood);

    if(index != -1){
        std::cout << myFood << " is at index " << index;
    }
    else{
        std::cout << myFood << " is not in the array";
=======
    //std::string coworkers[] = {"stefan", "viktor", "richard", "olle", "johnny", "asat", "markus"}; 

    double getTotal(double prices[], int size);

int main(){
    int size;

    std::cout << "Enter how many number of prices: "; 
    std::cin >> size;

    double prices[size];

    for(int i = 0; i < size; i++){ 
        std::cout << " Enter a price " << (i+1) << ":"; 
        std::cin >> prices[i];
>>>>>>> 0b236ebecec1cccabc957c130fad63c447cc4cf8
    }



<<<<<<< HEAD



    return 0;
}


int search(std::string array [], int size, std::string element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
=======
    double total = getTotal(prices, size);

    std::cout << '$' << total;


    char seeprice;
    std::cout << "\nDo you want to see all prices? y/n ";
    std::cin >> seeprice;
        if(seeprice == 'y' || seeprice == 'Y'){
            for(int i = 0; i < size; i++){
                std::cout << "price " << i+ 1 << ": " << prices[i] << std::endl;
            }

        }
    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total = total + prices[i];

    }





    return total;
>>>>>>> 0b236ebecec1cccabc957c130fad63c447cc4cf8
=======
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

>>>>>>> bfb0d09 (bubble sort)
}