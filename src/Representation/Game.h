//
// Created by abdir on 16/11/2024.
//
#include "RepConsts.h"
#include <memory>
#include <iostream>

#ifndef DOODLEJUMP_GAME_H
#define DOODLEJUMP_GAME_H


class Game {
private:
    void handleInput();
    void draw();
    void update();
    std::unique_ptr<sf::RenderWindow> window;
public:
    Game();
    ~Game();
    void run();

};


#endif //DOODLEJUMP_GAME_H