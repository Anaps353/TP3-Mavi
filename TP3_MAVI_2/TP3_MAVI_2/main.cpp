#include <SFML/Graphics.hpp>
using namespace sf;

Texture texturaBlanca;
Texture texturaNegra;

Sprite casillaBlanca;
Sprite casillaNegra;

int main() {

    RenderWindow App(VideoMode(800, 800), "Tablero de Ajedrez");

    texturaBlanca.loadFromFile("blanca.png");
    texturaNegra.loadFromFile("negra.png");

    casillaBlanca.setTexture(texturaBlanca);
    casillaNegra.setTexture(texturaNegra);



    int tamanoCasilla = 800 / 8;

    while (App.isOpen()) {
        Event event;
        while (App.pollEvent(event)) {
            if (event.type == Event::Closed)
                App.close();
        }

        App.clear();

        for (int fila = 0; fila < 8; fila++) {
            for (int columna = 0; columna < 8; columna++) {

                    if ((fila + columna) % 2 == 0) {
                    casillaBlanca.setPosition(columna * tamanoCasilla, fila * tamanoCasilla);
                    App.draw(casillaBlanca);
                }
                else {
                    casillaNegra.setPosition(columna * tamanoCasilla, fila * tamanoCasilla);
                    App.draw(casillaNegra);
                }
            }
        }

        App.display();
    }

    return 0;
}