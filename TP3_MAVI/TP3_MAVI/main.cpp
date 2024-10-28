#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texture;
Sprite sprite1, sprite2, sprite3, sprite4;

int main() {
		

	texture.loadFromFile("rcircle.png");
	sprite1.setTexture(texture);
	sprite2.setTexture(texture);
	sprite3.setTexture(texture);
	sprite4.setTexture(texture);

	RenderWindow app(VideoMode(800, 600), "Sniper^4 ");

	sprite1.setPosition(0, 0);
	sprite2.setPosition(app.getSize().x - texture.getSize().x, 0);
	sprite3.setPosition(0, app.getSize().y - texture.getSize().y); 
	sprite4.setPosition(app.getSize().x - texture.getSize().x, app.getSize().y - texture.getSize().y);


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
		app.display();

	}

	return 0;

}