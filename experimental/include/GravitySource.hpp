#include<include/Experimental.hpp>

#ifndef GRAVITYSOURCE_HPP
#define GRAVITYSOURCE_HPP

class GravitySource{
	public:
		GravitySource(const float _xPos, const float _yPos, const float _gravityStrength);
        GravitySource(const sf::Vector2f _position, const float _gravityStrength);

        void initPlanet();

        sf::Vector2f getPosition() const;

        float getXPosition() const ;
        void setXPosition(const float _xPos);

        float getYPosition() const ;
        void setYPosition(const float _yPos);

        float getGravityStrength() const ;
        void setGravityStrength(const float _gravityStrength);

		void Render(sf::RenderWindow& window);

	private:
		sf::Vector2f position;
		sf::CircleShape planet;
        float gravitystrength;
};

#endif