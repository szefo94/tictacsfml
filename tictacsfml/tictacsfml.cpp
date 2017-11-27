// tictacsfml.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include "Game.hpp"
#include "DEFINITIONS.hpp"
int main()
{
	marcin::Game(SCREEN_WIDTH, SCREEN_HEIGHT, "TIC-TAC-TOE");

	return EXIT_SUCCESS;
}

//run app script

//libs
/*
#include "SFML/Graphics.hpp"
#define SCREEN_WIDTH 500
#define SCREEN_HEIGHT 500
*/

//main() code
/*
sf::RenderWindow window(sf::VideoMode
(SCREEN_WIDTH,SCREEN_HEIGHT),
"TicTacToe");
while (window.isOpen())
{
sf::Event event;
while(window.pollEvent(event))
{
switch(event.type)
{
case sf::Event::Closed:
window.close();
break;
}
}
window.clear();

//objects to draw

window.display();

}*/