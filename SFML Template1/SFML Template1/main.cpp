#include "SFML/Graphics.hpp"
using namespace sf;

int main(){
	RenderWindow window(VideoMode(800, 600), "Test");
	while (window.isOpen()) {
		//��������� �������
		Event event;
		while (window.pollEvent(event))	{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}
		//��������� ����
		window.clear();
		window.display();
	}
	return 0;
}