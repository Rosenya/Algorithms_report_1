#include "../include/timer.hpp"
#include "../include/bubbleSort.hpp"
#include "../include/cocktailSort.hpp"
#include "../include/selectionSort.hpp"
#include "../include/insertionSort.hpp"
#include "../include/shellSort.hpp"
#include "../include/mergeSort.hpp"
#include "../include/sortingWrapper.hpp"
#include <iostream>

using namespace std;
using namespace sort;
using namespace sortingWrapper;

int main() {

    BubbleSort bubbleSort;
    CocktailSort cocktailSort;
    SelectionSort selectionSort;
    InsertionSort insertionSort;
    ShellSort shellSort;
    MergeSort mergeSort;

    int sizes[] = {1000, 5000, 10000};

    for(int size : sizes) {
        sortingWrapper::runTest(size, bubbleSort, cocktailSort,
                           selectionSort, insertionSort,
                           shellSort, mergeSort);
    }

    return 0;
}
