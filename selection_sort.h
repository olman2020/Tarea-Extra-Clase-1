//
// Created by bigolman20 on 25/8/21.
//

#ifndef TAREA_EXTRA_CLASE_1_SELECTION_SORT_H
#define TAREA_EXTRA_CLASE_1_SELECTION_SORT_H

class selection_sort {
public:
    selection_sort();
    void selectionSort(int arr[], int n);
    void printArray(int arr[], int size);
private:
    int n;
    void swap(int *xp, int *yp);
    int arr[];
};
#endif //TAREA_EXTRA_CLASE_1_SELECTION_SORT_H
