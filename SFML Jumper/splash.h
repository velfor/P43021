#pragma once
#include "SFML/Graphics.hpp"
#include <string>

class Splash {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	Splash(std::string file_name) {
		texture.loadFromFile(file_name);
		sprite.setTexture(texture);
		sprite.setScale(1.f, 1.12f);
	}
	void draw(sf::RenderWindow& window) { window.draw(sprite); }
};
