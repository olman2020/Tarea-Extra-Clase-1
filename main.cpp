#include <iostream>
#include <bits/stdc++.h>
#include "selection_sort.h"
// Driver program to test above functions
int main()
{
    selection_sort selection;
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection.selectionSort(arr, n);
    std::cout << "Sorted array: \n";
    selection.printArray(arr, n);
    return 0;
}

// This is code is contributed by rathbhupendra

