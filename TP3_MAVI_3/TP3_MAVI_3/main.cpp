#include <SFML/Graphics.hpp>
using namespace sf;

Texture texturaFondo;
Sprite spriteFondo;

int main() {
    
    RenderWindow App(VideoMode(800, 600), "Videojuego");

    texturaFondo.loadFromFile("fondo.jpg");
    spriteFondo.setTexture(texturaFondo);

 
    spriteFondo.setScale(
        App.getSize().x / static_cast<float>(texturaFondo.getSize().x),
        App.getSize().y / static_cast<float>(texturaFondo.getSize().y));

     while (App.isOpen()) {
        Event event;
        while (App.pollEvent(event)) {
            if (event.type == Event::Closed)
                App.close();
        }

        App.clear();
        App.draw(spriteFondo);
        App.display();
    }

    return 0;
}