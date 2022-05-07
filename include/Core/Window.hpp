/*
    Purpose: To include all Common Header files.
    Classe(s): None.
    Author(s): inkfil.
    Date Added: 22-04-2022
*/

#include <include/Shinigami.hpp>
#include <include/Core/GameCommon.hpp>

#ifndef WINDOW_HPP
#define WINDOW_HPP

enum WindowStyle {};

class Window{
	// Window Generation.
	// Event Handling.

    public:
        Window(const unsigned int length, const unsigned int height, const std::string& title);
        void pollEvent();
        int getWindowHeight() const ;
        int getWindowWidth() const ;
        std::string getWindowTitle() const ;
        void setWindowBorderStyle();
        int getFrameRateLimit() const ;
        void setFrameRateLimit(const unsigned int frameRateLimit);

    private:
        unsigned int winHeight = 480;
        unsigned int winWidth = 720;
        unsigned int frameRateLimit = 60;
        std::string winTitle;
        sf::RenderWindow sfWindow;
        sf::Event winEvent;
};

#endif