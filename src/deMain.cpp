/* 
    Author: Alexis Villarreal
    This will be the main file for sorting algorithms in cpp
    right now just has bubble sort but will make classes/other files for each sort and call them here

*/


#include <bits/stdc++.h>

#include <chrono>
#include <iostream>
#include "bubbleSort.h"

using namespace std;
using namespace std::chrono;


// Main: will probably make each sort a class and then call the classes in this main but its 12 am i do tomorrow :D
// PS: will also make a variety of arrays small big large
// PSS: adding time now will make sense once adding diff size arrays
int main(){

    
   bubbleSort bubSort;


    int arr[] = {69, 420, 25, 99, 12, 24, 25};
    int n = sizeof(arr)/sizeof(arr[0]);

    // get startpoint
    auto start = high_resolution_clock::now();
    bubSort.bubSort(arr, n);
    // get endpoint
    auto stop = high_resolution_clock::now();

    //get duration of sort
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Sorted array :\n";
    bubSort.printArray(arr, n);

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