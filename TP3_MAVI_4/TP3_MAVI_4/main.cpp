#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace sf;

Texture texture;
Sprite sprite;
Sprite sprite1;
Sprite sprite2;
Sprite sprite3;
Sprite sprite4;
Sprite sprite5;
Sprite sprite6;
Sprite sprite7;

float heightWindow;
float widthWindow;

int main()
{

    texture.loadFromFile("plataforma.jpg");

    sprite.setTexture(texture);
    sprite1.setTexture(texture);
    sprite2.setTexture(texture);
    sprite3.setTexture(texture);
    sprite4.setTexture(texture);
    sprite5.setTexture(texture);
    sprite6.setTexture(texture);
    sprite7.setTexture(texture);


    sprite.setScale(.15, .25);  
    sprite1.setScale(.15, .4);   
    sprite2.setScale(.15, .55);  
    sprite3.setScale(.15, .7);   
    sprite5.setScale(.15, .85);  
    sprite6.setScale(.15, 1.0);  
    sprite4.setScale(.15, 1.15); 
    sprite7.setScale(1.2, .15); 


    RenderWindow App(sf::VideoMode(800, 600, 32), "Plataforma");
    heightWindow = (float)App.getSize().y;
    widthWindow = (float)App.getSize().x;

    sprite.setPosition(0, heightWindow - sprite.getGlobalBounds().height);
    sprite1.setPosition(widthWindow - 800, heightWindow - sprite1.getGlobalBounds().height);
    sprite2.setPosition(widthWindow - 725, heightWindow - sprite2.getGlobalBounds().height); 
    sprite3.setPosition(widthWindow - 650, heightWindow - sprite3.getGlobalBounds().height); 
    sprite5.setPosition(widthWindow - 575, heightWindow - sprite5.getGlobalBounds().height); 
    sprite6.setPosition(widthWindow - 500, heightWindow - sprite6.getGlobalBounds().height); 
    sprite4.setPosition(widthWindow - 425, heightWindow - sprite4.getGlobalBounds().height); 
    sprite7.setPosition(widthWindow - 350, heightWindow - sprite4.getGlobalBounds().height);


    while (App.isOpen()) {
        Event event;
        while (App.pollEvent(event)) {
            if (event.type == Event::Closed)
                App.close();
        }

        App.clear();

        App.draw(sprite);
        App.draw(sprite1);
        App.draw(sprite2);
        App.draw(sprite3);
        App.draw(sprite4);
        App.draw(sprite5);
        App.draw(sprite6);
        App.draw(sprite7);

        App.display();
    }

    return 0;
}