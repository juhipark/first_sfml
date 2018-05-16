#include "Player.hpp"


Player::Player(){
    cards_hand = Card();
}

Player::~Player(){
}

void Player::seeMyCard(sf::RenderWindow &window){
    cards_hand.displayVisualCard(window, 10);
    cards_hand.displayVisualCard(window, 160);
}
