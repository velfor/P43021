#pragma once
#include "SFML/Graphics.hpp"

class Game {
public:
	Game();
	void play();
private:
	sf::RenderWindow window;
	void check_events();
	void update();
	void draw();  
};