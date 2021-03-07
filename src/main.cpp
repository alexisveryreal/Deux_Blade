/* 
    Author: Alexis Villarreal
    This will be the main file for sorting algorithms in cpp
    right now just has bubble sort but will make classes/other files for each sort and call them here

*/


#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

/*---------------------------------------------------------------
FUNCTION NAME: swap
PARAMETER(S): int pointer, int pointer
RETURN TYPE: NONE void
POSTCONDITION(S): swaps the two values passed in
---------------------------------------------------------------*/
void swap(int *xPointer, int *yPointer){
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
void bubbleSort(int arr[], int arraySize){
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
void printArray(int arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


// Main: will probably make each sort a class and then call the classes in this main but its 12 am i do tomorrow :D
// PS: will also make a variety of arrays small big large
// PSS: adding time now will make sense once adding diff size arrays
int main(){

    int arr[] = {69, 420, 25, 99, 12, 24, 25};
    int n = sizeof(arr)/sizeof(arr[0]);

    // get startpoint
    auto start = high_resolution_clock::now();
    bubbleSort(arr, n);
    // get endpoint
    auto stop = high_resolution_clock::now();

    //get duration of sort
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Sorted array :\n";
    printArray(arr, n);

    cout << "Time taken by bubblesort: "
         << duration.count() << " microsecond(s)" << endl;

    return 0;
}



// empty function desc for future
/*---------------------------------------------------------------
FUNCTION NAME: 
PARAMETER(S): 
RETURN TYPE: 
POSTCONDITION(S): 
---------------------------------------------------------------*/