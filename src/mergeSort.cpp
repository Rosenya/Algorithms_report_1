#include "../include/mergeSort.hpp"
#include "../include/timer.hpp"
#include <iostream>
using namespace std;

namespace sort {

long long MergeSort::mergeSortWithTimer(int arr[], int size) {
    //merge sort jest rekurencyjny i nie można go mierzyć bezpośrednio, dlatego stworzyłam funkcję mergeSortWithTimer,
    //która uruchamia timer przed wywołaniem mergeSort i zwraca czas po jego zakończeniu
    Timer t;
    mergeSort(arr, 0, size - 1);
    return t.elapsedMilliseconds();
}

void MergeSort::merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for(int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for(int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void MergeSort::mergeSort(int arr[], int left, int right) {
    if(left < right) {

        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }

}
}