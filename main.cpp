#include <SFML/Graphics.hpp>
#include <iostream>
int main(){
    
    sf::RenderWindow window(sf::VideoMode(2000, 2000), "UNO Card");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Magenta);

    sf::Texture tx;
    if(!tx.loadFromFile("small/yellow_2.png"))
    {
        std::cout << "Error loading the image" << std::endl;
    }
    sf::Sprite sp(tx);
    
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
                //if (event.type == sf::Event::Closed)
                    //window.close();
                case sf::Event::KeyPressed:      
                    std::cout << "A key has been pressed" << std::endl;
                    
                    break;
                default:
                    break;
            }
        }
        window.clear();
        window.draw(sp);
        window.display();
    }
    return 0;
}
