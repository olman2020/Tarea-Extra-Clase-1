#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H


class Selection_Sort
{
public:
    Selection_Sort();
    void swap(int *xp, int *yp);
    void selectionSort(int arr[], int n);
    void printArray(int arr[], int size);
};

#endif // SELECTION_SORT_H
