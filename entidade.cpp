#include "entidade.h"

entidade::entidade() : body(sf::Vector2f(100.f, 100.f)), velocidade_lateral(0), velocidade_vertical(0), vivo(false)
{
	window = nullptr;

}
