#include "UnoGame.hpp"

using namespace std;

UnoGame::UnoGame() : window(sf::VideoMode(WIDTH, HEIGHT), "BMJ UNO"){
    window.setFramerateLimit(60);
    c1 = Card(4, "Green");
    user = Player();
}

UnoGame::~UnoGame(){

}

void UnoGame::run(){
    while (window.isOpen()){
        processEvents();
        update();
        render();
    }
}

void UnoGame::processEvents(){
    sf::Event event;
    while (window.pollEvent(event))
    {
        // Check for specific events
        switch (event.type)
        {
            case sf::Event::Closed:
                window.close();
                break;
            case sf::Event::KeyPressed: 
                cout << "A key has been pressed" << endl;
                break;
            default:
                break;
        }
    }
}

void UnoGame::update(){

}

void UnoGame::render(){
    window.clear();
    //draw
    user.seeMyCard(window);
    //c1.displayVisualCard(window);
    window.display();
}

