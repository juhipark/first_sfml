#ifndef UNOGAME_HPP
#define UNOGAME_HPP
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Player.hpp"
#include "Card.hpp"

const int WIDTH = 2000;
const int HEIGHT = 2000;

class UnoGame{
protected:
    sf::RenderWindow window;
    Card c1;
    Player user;

public:
    UnoGame();
    ~UnoGame();
    void run();
    void processEvents();
    void update();
    void render();

};

#endif // UNOGAME_HPP
