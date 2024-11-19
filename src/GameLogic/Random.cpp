//
// Created by abdir on 17/11/2024.
//

#include "Random.h"

Random::Random() = default;

Random::~Random() = default;


Random &Random::getInstance() {
    static Random init;
    return init;
}

int Random::integer(int min, int max) {
    return 0;
}

bool Random::boolaen(float probability) {
    return false;
}

std::pair<int, int> Random::coords(int minX, int maxX, int minY, int maxY) {
    return std::pair<int, int>();
}


