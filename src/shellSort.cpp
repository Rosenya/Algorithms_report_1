#include "../include/shellSort.hpp"
#include "../include/timer.hpp"
#include <iostream>
using namespace std;

namespace sort {
long long ShellSort::shellSort(int arr[], int size) {
    Timer t;
    for(int gap = size/2; gap > 0; gap /= 2) {

        for(int i = gap; i < size; i++) {

            int temp = arr[i];
            int j;

            for(j = i; j >= gap && arr[j-gap] > temp; j -= gap)
                arr[j] = arr[j-gap];

            arr[j] = temp;
        }
    }
    return t.elapsedMilliseconds();
}
}