#ifndef CARD_HPP
#define CARD_HPP
#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;

class Card{
private:
    sf::Texture cardTexture;
    sf::Sprite cardSprite;
    int num; //number on card
    string color; //the color of the card
public:
    Card();
    Card(int n, string c);
    void displayVisualCard(sf::RenderWindow &window, int pos);
};
#endif /* Card_hpp */
