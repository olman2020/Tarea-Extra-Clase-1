//
// Created by bigolman20 on 25/8/21.
//
#include "selection_sort.h"
void selection_sort::selectionSort(int *arr, int n) {
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

void selection_sort::printArray(int *arr, int size) {
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    std::cout << endl;
}

void selection_sort::swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
