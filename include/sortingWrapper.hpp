#pragma once
#include "../include/bubbleSort.hpp"
#include "../include/cocktailSort.hpp"
#include "../include/selectionSort.hpp"
#include "../include/insertionSort.hpp"
#include "../include/shellSort.hpp"
#include "../include/mergeSort.hpp"

namespace sortingWrapper {
    void runTest(int size,
                 sort::BubbleSort& bubbleSort,
                 sort::CocktailSort& cocktailSort,
                 sort::SelectionSort& selectionSort,
                 sort::InsertionSort& insertionSort,
                 sort::ShellSort& shellSort,
                 sort::MergeSort& mergeSort);
}