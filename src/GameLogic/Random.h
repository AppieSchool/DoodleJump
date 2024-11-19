//
// Created by abdir on 17/11/2024.
//
#include <iostream>
#include <random>

#ifndef DOODLEJUMP_RANDOM_H
#define DOODLEJUMP_RANDOM_H


class Random {
private:
    Random();
    ~Random();
    std::mt19937 generator;
public:
    static Random& getInstance();
    Random(const Random& ) = delete;
    Random& operator=(const Random&) = delete;
    int integer(int min, int max);
    bool boolaen(float probability);
    std::pair<int,int> coords(int minX, int maxX, int minY , int maxY);

};


#endif //DOODLEJUMP_RANDOM_H
