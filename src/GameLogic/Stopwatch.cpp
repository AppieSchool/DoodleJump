//
// Created by abdir on 17/11/2024.
//

#include "Stopwatch.h"

Stopwatch::Stopwatch() = default;

Stopwatch::~Stopwatch() = default;

Stopwatch &Stopwatch::getInstance() {
    static Stopwatch init;
    return init;
}

void Stopwatch::restart() {
    start = std::chrono::steady_clock::now();

}

float Stopwatch::getElapsed() {
    auto now = std::chrono::steady_clock::now();
    std::chrono::duration<float> elapsed = now - start;

    return elapsed.count();
}
