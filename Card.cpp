#include "Card.hpp"

Card::Card(){
    num = 0;
    color = " ";
    
}
Card::Card(int n, string c){
    num = n;
    color = c;

}
void Card::displayVisualCard(sf::RenderWindow &window, int pos){
    //get itself's card num and color
    if(!cardTexture.loadFromFile("cards/yellow_2.png")){
        cout << "Error loading image" << endl;
    }
    cardSprite.setTexture(cardTexture);
    cardSprite.setPosition(10 + pos, 10);
    /*
    string cardStr = ""; 
    string dirStr = "res/";
    string number = "0";
    number[0] += num;
    cardStr = dirStr + color + number + ".png";
    if(!cardTexture.loadFromFile(cardStr))
    */
    window.draw(cardSprite);
}
