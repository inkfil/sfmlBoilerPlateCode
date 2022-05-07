#include<include/Experimental.hpp>
#include<include/GravitySource.hpp>

#include<cmath>

#ifndef PARTICLE_HPP
#define PARTICLE_HPP

class Particle{
	public:
		Particle(const float _xPos, const float _yPos, const float _xVel, const float _yVel);
        Particle(const sf::Vector2f _position, const sf::Vector2f _velocity);

        void initParticle();

        sf::Vector2f getPosition() const;

        float getXPosition() const ;
        void setXPosition(const float _xPos);

        float getYPosition() const ;
        void setYPosition(const float _yPos);

        sf::Vector2f getVelocity() const;

        float getXVelocity() const ;
        void setXVelocity(const float _xVel);

        float getYVelocity() const ;
        void setYVelocity(const float _yVel);

		void Render(sf::RenderWindow& window);
        void Update(const GravitySource& source);

	private:
		sf::Vector2f position;
		sf::Vector2f velocity;
		sf::CircleShape particle;
};

#endif