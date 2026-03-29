#include "../include/cocktailSort.hpp"
#include "../include/timer.hpp"
#include <iostream>
using namespace std;

namespace sort {
    Timer t;
    long long CocktailSort::cocktailSort(int tab[], int size) {
    bool zamiana = true;

    while (zamiana) {
        zamiana = false;

        // Przesuwamy w prawo
        for (int i = 0; i < size-1; i++) {
            if (tab[i] > tab[i + 1]) {
                swap(tab[i], tab[i + 1]);
                zamiana = true;
            }
        }

        if (!zamiana) break;

        zamiana = false;

        // Przesuwamy w lewo
        for (int i = size - 1 - 1; i >= 0; i--) {
            if (tab[i] > tab[i + 1]) {
                swap(tab[i], tab[i + 1]);
                zamiana = true;
            }
        }
    }
    return t.elapsedMilliseconds();
}
}