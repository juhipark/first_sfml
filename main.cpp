#include <SFML/Graphics.hpp>
#include <iostream>
#include "UnoGame.hpp"

using namespace std;

int main(){
    
    sf::RenderWindow window(sf::VideoMode(2000, 2000), "BMJ UNO");

    UnoGame uno_game;

    sf::Clock clock;
    sf::Time time;

    while (window.isOpen())
    {
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

        time = clock.getElapsedTime();
        uno_game.update(time.asSeconds());
        clock.restart().asSeconds();


        window.clear();
        uno_game.draw(window);
        window.display();
    }
    return 0;
}
