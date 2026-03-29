#include "../include/insertionSort.hpp"
#include "../include/timer.hpp"
#include <iostream>
using namespace std;

namespace sort {
    long long InsertionSort::insertionSort(int arr[], int size) {
        Timer t;
        for (int i = 1; i < size; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        return t.elapsedMilliseconds();
    }
}