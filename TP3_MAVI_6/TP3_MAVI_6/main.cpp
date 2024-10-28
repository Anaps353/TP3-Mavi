#include <SFML/Graphics.hpp>

using namespace sf;

Texture texturaRoja, texturaAmarilla, texturaAzul, texturaNegra;
Sprite spriteRojo, spriteAmarillo, spriteAzul, spriteNegro;

int main() {
  
    RenderWindow App(VideoMode(400, 400), "Colores");
       
    texturaRoja.loadFromFile("rojo.png");
    texturaAmarilla.loadFromFile("amarillo.png");
    texturaAzul.loadFromFile("azul.png");
    texturaNegra.loadFromFile("negro.png");
 
    spriteRojo.setTexture(texturaRoja);
    spriteAmarillo.setTexture(texturaAmarilla);
    spriteAzul.setTexture(texturaAzul);
    spriteNegro.setTexture(texturaNegra);

    
    spriteRojo.setScale(2.f, 2.f);       
    spriteAmarillo.setScale(1.5f, 1.5f); 
    spriteAzul.setScale(3.5f, 2.f);       
    spriteNegro.setScale(2.f, 2.f);   

    spriteRojo.setPosition(0, 0);
    spriteAmarillo.setPosition(200, 0);
    spriteAzul.setPosition(0, 200);
    spriteNegro.setPosition(200, 200);


    while (App.isOpen()) {
        Event event;
        while (App.pollEvent(event)) {
            if (event.type == Event::Closed)
                App.close();
        }

        App.clear();
        App.draw(spriteRojo);
        App.draw(spriteAmarillo);
        App.draw(spriteAzul);
        App.draw(spriteNegro);
        App.display();
    }

    return 0;
}