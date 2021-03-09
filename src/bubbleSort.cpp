#include <iostream>
#include "bubbleSort.h"
using namespace std;


/*---------------------------------------------------------------
FUNCTION NAME: swap
PARAMETER(S): two pointer x and y hehe
RETURN TYPE: void NOTHING YOU FUCKING IDIOT
POSTCONDITION(S): swaps the values from x->y y->x
---------------------------------------------------------------*/
void bubbleSort::swap(int *xPointer, int *yPointer){
    int temp = *xPointer; 
    *xPointer = *yPointer;
    *yPointer = temp;
}

/*---------------------------------------------------------------
FUNCTION NAME: bubbleSort
PARAMETER(S): int array, int arraySize
RETURN TYPE: none void 
POSTCONDITION(S): sorts the array using bubble sort...duh
---------------------------------------------------------------*/
void bubbleSort::bubSort(int arr[], int arraySize){
    int i, j, swapped = 0;
    for(i = 0; i < arraySize-1; i++){
        // the last i are in place
        for(j = 0; j < arraySize-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                // we swapped change flag
                swapped=1;
            }
        }
        // didn't swap just end 
        if(swapped == 0){
            break;
        }
    } 
}
/*---------------------------------------------------------------
FUNCTION NAME: printArray
PARAMETER(S): int array, int size
RETURN TYPE: NONE void
POSTCONDITION(S): prints out the array all in one line
---------------------------------------------------------------*/
void bubbleSort::printArray(int arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}