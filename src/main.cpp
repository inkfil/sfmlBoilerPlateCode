#include <include/Shinigami.hpp>

void Update(sf::RenderWindow& _mainWindow, std::vector<sf::CircleShape>& players){
	for(auto& player : players){
		_mainWindow.draw(player);
	}
}
 
int main(const int argc, const char** argv){
	srand(time(NULL));
	sf::RenderWindow _mainWindow;
	_mainWindow.create(sf::VideoMode(1024,768,32), "ink", sf::Style::None);
	std::vector<sf::CircleShape> players;
	for(int i=0; i<5; i++){
		sf::CircleShape player(20);
		// sf::CircleShape circle;
		// player.setRadius(150);
		player.setOutlineColor(sf::Color::Red);
		player.setOutlineThickness(2);
		player.setPosition(rand()%100, rand()%100);
		players.push_back(player);
	}
	while(_mainWindow.isOpen()){
		sf::Event event;
        	while(_mainWindow.pollEvent(event)){
			std::cout<<"event: "<<event.type<<std::endl;
			if(event.type == sf::Event::Closed){
				_mainWindow.close();
			}
			_mainWindow.clear(sf::Color(255, 255, 255, 255));
			Update(_mainWindow, players);
			 _mainWindow.display();
		}
	}
    return EXIT_SUCCESS;
}

