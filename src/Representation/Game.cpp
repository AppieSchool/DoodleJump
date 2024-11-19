//
// Created by abdir on 16/11/2024.
//

#include "Game.h"
#include <SFML/Graphics.hpp>

Game::Game() {
    // Initilaze the window
    window = std::make_unique<sf::RenderWindow>(sf::VideoMode(Constant::SCREENWIDTH, Constant::SCREENHEIGHT),"DoodleJump");

    // cap the frame rate
    window->setFramerateLimit(Constant::FPS);

}

Game::~Game() {
    // Construct
}

void Game::run() {
    // Main game loop

    sf::Texture t;
    t.loadFromFile("Textures/background.png");
    sf::Sprite s(t);

    while (window->isOpen())
    {
        // Checking for the events
        for (auto event = sf::Event(); window->pollEvent(event);)
        {
            switch (event.type) {
                case sf::Event::Closed:
                    window->close();
                case sf::Event::KeyPressed:
                    handleInput();

            }
        }

        window->clear(sf::Color::White);
        window->draw(s);
        window->display();
    }

}

void Game::handleInput() {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
        //Move Left

    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
        //Move right

    }

}

void Game::draw() {

}


void Game::update() {
    // Give the updates to World

}
