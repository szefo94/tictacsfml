#include "stdafx.h"
#include <sstream>
#include "SplashState.hpp"
#include <iostream>
#include "DEFINITIONS.hpp"
namespace marcin
{
	SplashState::SplashState(GameDataRef data) :_data(data)
	{
		
	}

	void SplashState::Init()
	{
		this->_data->assets.LoadTexture("Splash State Background", SPLASH_SCENE_BACKGROUND_FILEPATH);
		_background.setTexture(this->_data->assets.GetTexture("Splash State Background"));
	}

	void SplashState::HandleInput()
	{
		sf::Event event;

		while(this->_data->window.pollEvent(event))
		{
			if (sf::Event::Closed==event.type)
			{
				this->_data->window.close();

			}
		}
	}

	void SplashState::Update(float dt)
	{
		if(this->_clock.getElapsedTime().asSeconds()>SPLASH_STATE_SHOW_TIME)
		{
			//switch to the main menu
			std::cout << "Go to Main Menu" << std::endl;

		}
	}
	void SplashState::Draw(float dt)
	{
		this->_data->window.clear(sf::Color::Transparent);
		this->_data->window.draw(this->_background);
		this->_data->window.display();
	}



}
