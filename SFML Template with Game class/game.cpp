#include "game.h"

Game::Game() : 
	window(sf::VideoMode(800, 600), "Test")
{
	window.setVerticalSyncEnabled(true);
	//window.setFramerateLimit(60);
}
void Game::play() {
	while (window.isOpen()) {
		check_events();
		update();
		draw();
	}
}
void Game::check_events() {
	sf::Event event;
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) window.close();
	}
}
void Game::update() {}
void Game::draw() {
	window.clear(sf::Color::Cyan);
	window.display();
}