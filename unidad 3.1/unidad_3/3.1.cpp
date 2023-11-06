//Bibliotecas//
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

//Variables//

Texture texture;


Sprite sprite;
Sprite sprite2;
Sprite sprite3;
Sprite sprite4;





//Entrada//

int main() {

	//Cargamos la textura del archivo//
	texture.loadFromFile("rcircle.png");
	
	
	//cargamos el material del sprite
	sprite.setTexture(texture);
	sprite2.setTexture(texture);
	sprite3.setTexture(texture);
	sprite4.setTexture(texture);
	
	

	//Movemos el Sprite
	
	sprite.setPosition(0, 480); 
	sprite2.setPosition(0, 0);
	sprite3.setPosition(650, 0);
	sprite4.setPosition(650, 480);
	




	

	//creamos la ventana
	
	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"Que ventana horrible");


	//loop principal
	while (App.isOpen())
	{

		//limpiamos la ventana
		App.clear();

		//dibujamos la escena
		App.draw(sprite);
		App.draw(sprite2);
		App.draw(sprite3);
		App.draw(sprite4);
		
		



		//mostramos ventana
		App.display();

	}

	return 0;


}
