#include "SFML/Graphics.hpp"
#include "const.h"
using namespace sf;

int main(){
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Test");
	window.setFramerateLimit(60);
	
	float radius = 20.f;
	CircleShape circle(radius,100);
	float x = 400.f - radius;
	float y = 300.f - radius;
	circle.setPosition(x, y);
	float speedx = 2.5f;
	float speedy = 3.5f;

	float width = 20.f;
	float height = 80.f;
	Vector2f rect_size(width, height);
	RectangleShape rect(rect_size);
	Vector2f pos(10,WINDOW_HEIGHT/2 - rect_size.y/2);
	rect.setPosition(pos);
	Vector2f rect_speed(0, 2);


	while (window.isOpen()) {
		//1 обработка событий
		Event event;
		while (window.pollEvent(event))	{
			// ѕользователь нажал на Ђкрестикї и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		//2 update - изменение игровых объектов
		//1 способ измен€ем координаты вручную
		//x -= speedx;
		// и устанавливаем новую позицию
		//circle.setPosition(x, y); 
		circle.move(-speedx, speedy);
		rect.move(rect_speed);
		//круг дошел до левого кра€ экрана или до правого
		if (circle.getPosition().x <= 0 || 
			circle.getPosition().x + 2 * radius >= WINDOW_WIDTH) 
		{
			//измен€ем направление по оси х
			speedx = -speedx;
		}
		//круг дошел до нижнего кра€ экрана или до верхнего
		if (circle.getPosition().y <= 0 ||
			circle.getPosition().y + 2 * radius >= WINDOW_HEIGHT)
		{
			speedy = -speedy;
		}
		// 
		if (rect.getPosition().y <= 0 ||
			rect.getPosition().y + rect_size.y >= WINDOW_HEIGHT)
		{
			rect_speed.y = -rect_speed.y;
		}
		//3 отрисовка окна
		//3.1 - стираем
		window.clear();
		//3.2 - рисуем
		window.draw(circle);
		window.draw(rect);
		//3.3 - отображаем на экране
		window.display();
	}
	return 0;
}