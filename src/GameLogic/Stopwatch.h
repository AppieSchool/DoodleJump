//
// Created by abdir on 17/11/2024.
//

#include <chrono>

#ifndef DOODLEJUMP_STOPWATCH_H
#define DOODLEJUMP_STOPWATCH_H


class Stopwatch {
private:
    Stopwatch();
    ~Stopwatch();
    std::chrono::time_point<std::chrono::steady_clock> start;
public:
    static Stopwatch& getInstance();
    Stopwatch(const Stopwatch&) = delete;
    Stopwatch& operator=(const Stopwatch&) = delete;

    void restart();
    float getElapsed();

};


#endif //DOODLEJUMP_STOPWATCH_H
