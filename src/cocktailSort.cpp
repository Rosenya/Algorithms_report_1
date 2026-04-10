#include "../include/cocktailSort.hpp"
#include "../include/timer.hpp"
#include <iostream>
using namespace std;

namespace sort {
    long long CocktailSort::cocktailSort(int tab[], int size) {
    Timer t;

    bool zamiana = true;
    int start = 0;
    int end = size - 1;

    while (zamiana) {
        zamiana = false;

        // Przejście w prawo
        for (int i = start; i < end; i++) {
            if (tab[i] > tab[i + 1]) {
                std::swap(tab[i], tab[i + 1]);
                zamiana = true;
            }
        }

        if (!zamiana) break;
        end--;

        zamiana = false;

        // Przejście w lewo
        for (int i = end - 1; i >= start; i--) {
            if (tab[i] > tab[i + 1]) {
                std::swap(tab[i], tab[i + 1]);
                zamiana = true;
            }
        }

        start++;
    }

    return t.elapsedMilliseconds();
}
}