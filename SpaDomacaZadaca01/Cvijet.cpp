#include "Cvijet.h"
#include<iostream>

using namespace std;

Cvijet::Cvijet(sf::RenderWindow *window)
{
	_window = window;
}

void Cvijet::draw()
{


	sf::RectangleShape stabljika;
	stabljika.setPosition(sf::Vector2f(625, 450));
	stabljika.setFillColor(sf::Color(14, 182, 52));
	stabljika.setSize(sf::Vector2f(50, 500));

	sf::CircleShape unutarCvijeta;
	unutarCvijeta.setFillColor(sf::Color(247, 239, 98));
	unutarCvijeta.setPosition(sf::Vector2f(550, 400));
	unutarCvijeta.setRadius(100);

	sf::ConvexShape list;
	list.setPointCount(7);
	list.setPoint(0, sf::Vector2f(700.f, 100.f));
	list.setPoint(1, sf::Vector2f(700.f, 100.f));
	list.setPoint(2, sf::Vector2f(700.f, 200.f));
	list.setPoint(3, sf::Vector2f(700.f, 100.f));
	list.setPoint(4, sf::Vector2f(700.f, 200.f));
	list.setPoint(5, sf::Vector2f(700.f, 200.f));
	list.setPoint(6, sf::Vector2f(300.f, 200.f));
	list.setFillColor(sf::Color::Green);
	list.setPosition(350.f, 550.f);
	
	sf::CircleShape vanCvijeta;
	vanCvijeta.setFillColor(sf::Color::Red);
	vanCvijeta.setPosition(sf::Vector2f(500, 350));
	vanCvijeta.setRadius(150);

	sf::CircleShape sunce;
	sunce.setFillColor(sf::Color(247, 239, 98));
	sunce.setPosition(sf::Vector2f(50, 50));
	sunce.setRadius(100);

	sf::Clock frameClock;
	float animationTime = 4.f;
	float elapsedTime = 0.f;

	while (_window->isOpen())
	{
		sf::Event event;
		while (_window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				_window->close();
		}

		// Calculate the elapsed time since the last frame
		float elapsedTime = frameClock.restart().asSeconds();

		// Calculate the scale factor based on elapsed time
		float scaleFactor = std::sin(elapsedTime * 2.f * 3.14159f / animationTime) + 1.f;

		sunce.setScale(scaleFactor, scaleFactor);

		_window->draw(stabljika);
		_window->draw(vanCvijeta);
		_window->draw(unutarCvijeta);
		_window->draw(list);
		_window->draw(sunce);
		_window->display();
	}
}
