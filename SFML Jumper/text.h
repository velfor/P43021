#pragma once
#include "SFML/Graphics.hpp"
#include <string>
#include "settings.h"

class TextObject {
private:
	sf::Font font;
	sf::Text text;
public:
	TextObject(float x, float y, int size, sf::Color color) {
		font.loadFromFile(IMAGES_FOLDER + FONT_FILE_NAME);
		text.setFont(font);
		text.setFillColor(color);
		text.setCharacterSize(size);
		text.setPosition(x, y);
	}
	void update(std::string str) { text.setString(str); }
	void draw(sf::RenderWindow& window) { window.draw(text); }
};
