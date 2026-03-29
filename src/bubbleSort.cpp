#include "../include/bubbleSort.hpp"
#include "../include/timer.hpp"
#include <utility>
using namespace std;

namespace sort {
long long BubbleSort::bubbleSort(int arr[], int size) {
    Timer t;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return t.elapsedMilliseconds();
}
}