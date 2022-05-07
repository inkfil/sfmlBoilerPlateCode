#include<include/Particle.hpp>

Particle::Particle(const float _xPos, const float _yPos, const float _xVel, const float _yVel){
	position.x = _xPos;
	position.y = _yPos;
	velocity.x = _xVel;
	velocity.y = _yVel;

	initParticle();
}

Particle::Particle(const sf::Vector2f _position, const sf::Vector2f _velocity){
	position = _position;
	velocity = _velocity;

	initParticle();
}

void Particle::initParticle(){
	particle.setPosition(position);
	particle.setFillColor(sf::Color::Red);
	particle.setRadius(5);
}

sf::Vector2f Particle::getPosition() const{
	return position;
}

float Particle::getXPosition() const {
	return position.x;
}

void Particle::setXPosition(const float _xPos){
	position.x = _xPos;
}

float Particle::getYPosition() const {
	return position.y;
}

void Particle::setYPosition(const float _yPos){
	position.y = _yPos;
}

sf::Vector2f Particle::getVelocity() const{
	return velocity;
}

float Particle::getXVelocity() const {
	return velocity.x;
}

void Particle::setXVelocity(const float _xVel){
	velocity.x = _xVel;
}

float Particle::getYVelocity() const {
	return velocity.y;
}

void Particle::setYVelocity(const float _yVel){
	velocity.y = _yVel;
}

void Particle::Render(sf::RenderWindow& window){
	particle.setPosition(position);
	window.draw(particle);
}

void Particle::Update(const GravitySource& source){
	float xDistance = source.getXPosition() - position.x;
	float yDistance = source.getYPosition() - position.y;

	float distance = std::sqrt(xDistance * xDistance + yDistance * yDistance);
	float inverseDistance = 1.0f/distance;
	float inverseDistanceSquared = inverseDistance * inverseDistance;

	float xNormal = xDistance * inverseDistance;
	float yNormal = yDistance * inverseDistance;

	float xAcceleration = source.getGravityStrength() * xNormal * inverseDistanceSquared;
	float yAcceleration = source.getGravityStrength() * yNormal * inverseDistanceSquared;

	velocity.x += xAcceleration;
	velocity.y += yAcceleration;

	position.x += velocity.x;
	position.y += velocity.y;
}