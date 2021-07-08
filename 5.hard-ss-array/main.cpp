#include <iostream>


int main(){

    int array[] = {9,3,1,2,10,2,5,8};
    int biggestNumber;

    //RIESENIE 1
    biggestNumber = array[0];
    int arrayLength = sizeof(array) / sizeof(array[0]); //dlzka pola

    for(int index = 0; index < arrayLength; index++){
        int number = array[index];
        if(number > biggestNumber){
            biggestNumber = number;
        }
    }

    std::cout << biggestNumber << "\n";


    //RIESENIE 2
    biggestNumber = array[0];

    for(int number : array){
        if(number > biggestNumber){
            biggestNumber = number;
        }
    }

    std::cout << biggestNumber << "\n";


    return 0;
}