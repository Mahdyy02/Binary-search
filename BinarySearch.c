#include <stdio.h>

int binarySearch(int arr[], unsigned int size, int value){

    unsigned int first_index = 0;
    unsigned int last_index = size;

    while(first_index <= last_index){

        unsigned int medium_index = (first_index+last_index)/2;

        if(arr[medium_index] == value) return medium_index;
        if(value > arr[medium_index]) first_index = ++medium_index;
        else last_index = --medium_index;

    }

}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9, 11};
    printf("Indice: %i\n", binarySearch(arr, 9, 9));

    return 0;
}