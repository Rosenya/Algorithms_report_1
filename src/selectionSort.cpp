#include "../include/selectionSort.hpp"
#include "../include/timer.hpp"
#include <iostream>
using namespace std;

namespace sort {
long long SelectionSort::selectionSort(int arr[], int size) {
    Timer t;
    for(int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
    return t.elapsedMilliseconds();
}
}