//
// Created by abdir on 16/11/2024.
//
#include <vector>
#include "Entity.h"

#ifndef DOODLEJUMP_WORLD_H
#define DOODLEJUMP_WORLD_H


class World {
private:
    std::vector<Entity*> entityList;
public:
    World();
    ~World();

};


#endif //DOODLEJUMP_WORLD_H
