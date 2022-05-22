#pragma once
#include <SFML/Graphics.hpp>

class entidade
{
protected:
	sf::RectangleShape body;
	sf::RenderWindow *window;
	float velocidade_lateral;
	float velocidade_vertical;
	bool vivo;

public:
	entidade();
	~entidade(){}


	void setWindow(sf::RenderWindow* w) { this->window = w; }
	void draw() { window->draw(body); }
};

