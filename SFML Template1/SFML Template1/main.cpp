#include "SFML/Graphics.hpp"
using namespace sf;

int main(){
	RenderWindow window(VideoMode(800, 600), "Test");
	while (window.isOpen()) {
		//обработка событий
		Event event;
		while (window.pollEvent(event))	{
			// ѕользователь нажал на Ђкрестикї и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		//отрисовка окна
		window.clear();
		window.display();
	}
	return 0;
}