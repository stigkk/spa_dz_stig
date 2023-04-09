#include <SFML/Graphics.hpp>
#include "Cvijet.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1300, 900), "Hello, SFML world!");
	window.setFramerateLimit(60);
	Cvijet cvijet(&window);

	/*
	sf::CircleShape circle;
	circle.setPosition(400.f, 300.f);
	circle.setFillColor(sf::Color::Red);
	circle.setRadius(10000);

	sf::Clock frameClock;
	float animationTime = 1.f; // 1 second animation time
	float elapsedTime = 0.f;
	*/
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		/*
		elapsedTime = frameClock.restart().asSeconds();

		// Apply scaling transformation to the circle based on elapsed time
		float scaleFactor = (elapsedTime < animationTime / 2) ? elapsedTime / (animationTime / 2) :
			1 - (elapsedTime - animationTime / 2) / (animationTime / 2);
		circle.setScale(scaleFactor, scaleFactor);
		*/
//		window.draw(circle);
		cvijet.draw();
		window.display();
	}

	return 0;
}