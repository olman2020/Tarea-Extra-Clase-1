#include "selection_sort.h"
#include "bits/stdc++.h"
using namespace std;
//Implementacion de algoritmo de ordenamiento Selection Sort
Selection_Sort::Selection_Sort()
{

}

void Selection_Sort::swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void Selection_Sort::selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // Limite de movimiento uno por uno del array sin ordenar
    for (i = 0; i < n-1; i++)
    {
        // Encuentra el elemento mínimo en el array sin clasificar
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Intercambia el elemento mínimo encontrado con el primer elemento
        swap(&arr[min_idx], &arr[i]);
    }
}

void Selection_Sort::printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

