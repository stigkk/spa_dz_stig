#pragma once
#include <SFML/Graphics.hpp>
class Cvijet
{
private:

	sf::RenderWindow* _window;

public:
	Cvijet(sf::RenderWindow *window);
	void draw();
	// sf::Vector2f getPoint(std::size_t index);
};

