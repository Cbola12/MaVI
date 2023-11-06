//Bibliotecas//
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;


	////Variables////
Texture texture_a;
Texture texture_b;


Sprite sprite_a;
Sprite sprite_b;

float escalaX;
float escalaY;
float escalaX2;
float escalaY2;









//Entrada a la app//

int main() {

	

	//Cargamos la textura//
	texture_a.loadFromFile("chessb.png");
	texture_b.loadFromFile("chessw.png");
	

	//cargamos el material//

	sprite_a.setTexture(texture_a);
	sprite_b.setTexture(texture_b);
	

	//escalar sprites
	float escalaX = 100.0f / 128.0f;
	float escalaY = 100.0f / 128.0f;
	sprite_a.setScale(escalaX, escalaY);

	float escalaX2 = 100.0f / 128.0f;
	float escalaY2 = 100.0f / 128.0f;
	sprite_b.setScale(escalaX2, escalaY2);

	


	//Creamos la ventana//

	sf::RenderWindow App(sf::VideoMode(800, 800, 32),
		"Que ventana horrible");
	
	
	int numSprites = 8;

	//Loop Principal
	while (App.isOpen()) {
		
		//limpiamos ventana
		App.clear();
		
		for (int i = 0; i < numSprites; i++) {
			for (int j = 0; j < numSprites; j++) {
				if ((i + j) % 2 == 0) {
					sprite_b.setPosition(i * 100.0f, j * 100.0f);
					App.draw(sprite_b);
				}
				else {
					sprite_a.setPosition(i * 100.0f, j * 100.0f);
					App.draw(sprite_a);
				}
			}
		}

		


		App.display();

		
	}
	return 0;
}


