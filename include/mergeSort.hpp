#pragma once
#include <iostream>
using namespace std;

namespace sort {
    class MergeSort {
    public:
        long long mergeSortWithTimer(int arr[], int size); 
    private:
        void merge(int arr[], int left, int mid, int right);
        void mergeSort(int arr[], int left, int right);
    };
}
