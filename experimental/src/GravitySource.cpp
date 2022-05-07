#include<include/GravitySource.hpp>

GravitySource::GravitySource(const float _xPos, const float _yPos, const float _gravityStrength){
	position.x = _xPos;
	position.y = _yPos;
	gravitystrength = _gravityStrength;

	initPlanet();
}

GravitySource::GravitySource(const sf::Vector2f _position, const float _gravityStrength){
	position = _position;
	gravitystrength = _gravityStrength;

	initPlanet();
}

void GravitySource::initPlanet(){
	planet.setPosition(position);
	planet.setFillColor(sf::Color::White);
	planet.setRadius(40);
}

sf::Vector2f GravitySource::getPosition() const {
	return position;
}

float GravitySource::getXPosition() const {
	return position.x;
}

void GravitySource::setXPosition(const float _xPos){
	position.x = _xPos;
}

float GravitySource::getYPosition() const {
	return position.y;
}

void GravitySource::setYPosition(const float _yPos){
	position.y = _yPos;
}

float GravitySource::getGravityStrength() const {
	return gravitystrength;
}

void GravitySource::setGravityStrength(const float _gravityStrength){
	gravitystrength = _gravityStrength;
}

void GravitySource::Render(sf::RenderWindow& window){
	window.draw(planet);
}