#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Card.hpp"

using namespace std;

class Player{
protected:
    sf::Sprite cardSprite;
    Card cards_hand;
public:
    Player();
    ~Player();
    void seeMyCard(sf::RenderWindow &window);

};
/*

    sf::Texture cardTexture;
    sf::Sprite cardSprite;


public:
    UnoGame();
    ~UnoGame();

    //dt, change in time
    void update(float dt);
    void draw(sf::RenderWindow &window);

*/


#endif //PLAYER_HPP
