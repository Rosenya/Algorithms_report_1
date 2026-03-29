#pragma once
#include <chrono>
using namespace std::chrono;

class Timer {
public:
    Timer();
    void reset();
    long long elapsedMilliseconds() const;

private:
    high_resolution_clock::time_point start;
};