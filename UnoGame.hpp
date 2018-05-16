#ifndef UNOGAME_HPP
#define UNOGAME_HPP

#include <SFML/Graphics.hpp>
#include <iostream>
class UnoGame{
protected:
    sf::Texture cardTexture;
    sf::Sprite cardSprite;


public:
    UnoGame();
    ~UnoGame();

    //dt, change in time
    void update(float dt);
    void draw(sf::RenderWindow &window);


};

#endif // UNOGAME_HPP
