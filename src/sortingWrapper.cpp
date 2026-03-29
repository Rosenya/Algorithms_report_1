#include "../include/sortingWrapper.hpp"
#include "../include/bubbleSort.hpp"
#include "../include/cocktailSort.hpp"
#include "../include/selectionSort.hpp"
#include "../include/insertionSort.hpp"
#include "../include/shellSort.hpp"
#include "../include/mergeSort.hpp"

#include <iostream>
#include <algorithm>

using namespace std;
using namespace sort;

void fillArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = size - i;
    }
}

namespace sortingWrapper {

void runTest(int size,
             BubbleSort& bubbleSort,
             CocktailSort& cocktailSort,
             SelectionSort& selectionSort,
             InsertionSort& insertionSort,
             ShellSort& shellSort,
             MergeSort& mergeSort) {

    int* base = new int[size];
    fillArray(base, size);

    int* arr1 = new int[size];
    copy(base, base + size, arr1);
    long long t1 = bubbleSort.bubbleSort(arr1, size);

    int* arr2 = new int[size];
    copy(base, base + size, arr2);
    long long t2 = cocktailSort.cocktailSort(arr2, size);

    int* arr3 = new int[size];
    copy(base, base + size, arr3);
    long long t3 = selectionSort.selectionSort(arr3, size);

    int* arr4 = new int[size];
    copy(base, base + size, arr4);
    long long t4 = insertionSort.insertionSort(arr4, size);

    int* arr5 = new int[size];
    copy(base, base + size, arr5);
    long long t5 = shellSort.shellSort(arr5, size);

    int* arr6 = new int[size];
    copy(base, base + size, arr6);
    long long t6 = mergeSort.mergeSortWithTimer(arr6, size);

    cout << "\n=== " << size << " elementów ===\n";
    cout << "BubbleSort: " << t1 << " us\n";
    cout << "CocktailSort: " << t2 << " us\n";
    cout << "SelectionSort: " << t3 << " us\n";
    cout << "InsertionSort: " << t4 << " us\n";
    cout << "ShellSort: " << t5 << " us\n";
    cout << "MergeSort: " << t6 << " us\n";

    delete[] base;
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
    delete[] arr5;
    delete[] arr6;
}

}