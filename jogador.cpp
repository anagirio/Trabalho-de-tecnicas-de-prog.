#include "jogador.h"
#define MAX_SPEED 0.15
#define MIN_SPEED -0.15

jogador::jogador()
{
	body.setFillColor(sf::Color::Green);// seta a cor do retangulo.
}

jogador::~jogador()
{
}

void jogador::set_speed()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		velocidade_lateral += 0.0001;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		velocidade_lateral -= 0.0001;
	}
	else
	{
		velocidade_lateral = 0;
	}
	if (velocidade_lateral > MAX_SPEED) { velocidade_lateral = MAX_SPEED; }
	if (velocidade_lateral < MIN_SPEED) { velocidade_lateral = MIN_SPEED; }
}

void jogador::move()
{
	set_speed();
	body.move(sf::Vector2f(velocidade_lateral, 0.0f));

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		body.move(sf::Vector2f(0.f, 0.1f));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		body.move(sf::Vector2f(0.0f, -0.1f));
	}
}
