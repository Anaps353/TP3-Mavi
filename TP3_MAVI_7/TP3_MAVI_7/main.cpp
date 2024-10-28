#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texturaRojo, texturaAzul; 
Sprite sprite1, sprite2, sprite3, sprite4, sprite5; 

int main() {

    texturaRojo.loadFromFile("rcircle.png");
    sprite1.setTexture(texturaRojo);
    sprite2.setTexture(texturaRojo);
    sprite3.setTexture(texturaRojo);
    sprite4.setTexture(texturaRojo);

    texturaAzul.loadFromFile("bcircle.png");
    sprite5.setTexture(texturaAzul);

    RenderWindow app(VideoMode(800, 600), "Sniper^4 ");

    sprite1.setPosition(0, 0);
    sprite2.setPosition(app.getSize().x - texturaRojo.getSize().x, 0);
    sprite3.setPosition(0, app.getSize().y - texturaRojo.getSize().y);
    sprite4.setPosition(app.getSize().x - texturaRojo.getSize().x, app.getSize().y - texturaRojo.getSize().y);
    sprite5.setPosition(400 - texturaAzul.getSize().x / 2, 300 - texturaAzul.getSize().y / 2);

    while (app.isOpen())
    {
        Event event;
        while (app.pollEvent(event)) {
            if (event.type == Event::Closed)
                app.close();
        }

        app.clear();
        app.draw(sprite1);
        app.draw(sprite2);
        app.draw(sprite3);
        app.draw(sprite4);
        app.draw(sprite5);
        app.display();

    }

    return 0;
}