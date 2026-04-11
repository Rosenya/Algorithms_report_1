#include "../include/timer.hpp"
using namespace std::chrono;

Timer::Timer() {
    start = high_resolution_clock::now();
}

void Timer::reset() {
    start = high_resolution_clock::now();
}

long long Timer::elapsedMilliseconds() const {
    auto stop = high_resolution_clock::now();
    return duration_cast<milliseconds>(stop - start).count();
}


