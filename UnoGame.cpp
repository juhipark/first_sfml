#include "UnoGame.hpp"

using namespace std;

UnoGame::UnoGame(){
    if(!cardTexture.loadFromFile("cards/yellow_0.png")){
        cout << "Error loaidng image" << endl;
    }
    cardSprite.setTexture(cardTexture);
}
UnoGame::~UnoGame(){
}

void UnoGame::update(float dt){

}

void UnoGame::draw(sf::RenderWindow &window){
    window.draw(cardSprite);
}
