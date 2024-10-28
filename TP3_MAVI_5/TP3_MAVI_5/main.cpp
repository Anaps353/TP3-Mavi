#include <SFML/Graphics.hpp>
using namespace sf;

Texture textura;
Sprite sprite;

int main() {
    
    RenderWindow App(VideoMode(800, 600), "Rotacion");

    textura.loadFromFile("amarillo.png");

    sprite.setTexture(textura);
    sprite.setScale(0.3f, 0.3f);
    sprite.setPosition(400, 300);
    sprite.setOrigin(
        textura.getSize().x / 2.f,
        textura.getSize().y /
        2.f);

    
    float angulo = 0.0f;
    float velocidadRotacion = 50.0f;

    
    Clock clock;

    
    while (App.isOpen()) {
        Event event;
        while (App.pollEvent(event)) {
            if (event.type == Event::Closed)
                App.close();
        }

        float deltaTime = clock.restart().asSeconds();
        angulo += velocidadRotacion * deltaTime;
        sprite.setRotation(angulo);

        
        App.clear();
        App.draw(sprite);
        App.display();
    }

    return 0;
}