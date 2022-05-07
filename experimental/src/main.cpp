#include<include/Experimental.hpp>
#include<include/GravitySource.hpp>
#include<include/Particle.hpp>

// Standard Headers.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <stdio.h>
#include <stdlib.h>

void Update(sf::RenderWindow& _mainWindow, std::vector<GravitySource>& planets){
	for(auto& planet : planets){
		// _mainWindow.draw(player);
        planet.Render(_mainWindow);
	}
}

void Update(sf::RenderWindow& _mainWindow, std::vector<sf::CircleShape>& players){
	for(auto& player : players){
		_mainWindow.draw(player);
	}
}
 
int main(const int argc, const char** argv){
	srand(time(NULL));

	sf::RenderWindow _mainWindow;
	_mainWindow.create(sf::VideoMode(1600,1000), "ink"); // , sf::Style::Default);
    _mainWindow.setFramerateLimit(60);
    sf::Vector2f planetPosition(800, 500);
    sf::Vector2f particlePosition(600, 700);
    sf::Vector2f particleVelocity(2, 4);
    GravitySource planet(planetPosition, 100000);
    Particle particle(particlePosition, particleVelocity);

    // GravitySource planet(800, 500, 10000);
    // Particle particle(600, 700, 4, 5);
	// std::vector<GravitySource> planets;
	// for(int i=0; i<5; i++){
    //     GravitySource planet(rand()%(_mainWindow.getSize().x-100), rand()%(_mainWindow.getSize().y-100), 3);
	// 	// planet.setOutlineColor(sf::Color::Red);
	// 	// planet.setOutlineThickness(2);
	// 	// planet.setPosition(rand()%_mainWindow.getSize().x, rand()%_mainWindow.getSize().y);
	// 	planets.push_back(planet);
	// }
	while(_mainWindow.isOpen()){
		sf::Event event;
        while(_mainWindow.pollEvent(event)){
            std::cout<<"event: "<<event.type<<std::endl;
            if(event.type == sf::Event::Closed){
                _mainWindow.close();
            }
            // _mainWindow.clear();
            // _mainWindow.draw(player);
            // Update(_mainWindow, players);
            // Update(_mainWindow, planets);

            particle.Update(planet);
            planet.Render(_mainWindow);
            particle.Render(_mainWindow);
            _mainWindow.display();
		}
	}
    return EXIT_SUCCESS;
}