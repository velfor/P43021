#pragma once
#include "SFML/Graphics.hpp"
#include "const.h"

class TextObj {
private:
	sf::Font font;
	sf::Text text;
public:
	TextObj() {
		font.loadFromFile(FONT_FILE_NAME);
		text.setFont(font);
	}
	void init(float x, float y, int size, sf::Color color) {
		text.setFillColor(color);
		text.setCharacterSize(size);
		text.setPosition(x, y);
	}
	sf::Text getText() { return text; }
	void update(std::string str) { text.setString(str); }
};
