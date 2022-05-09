#include <include/Core/Window.hpp>

Window::Window(const unsigned int _width, const unsigned int _height, const std::string& _title): winWidth(_width), winHeight(_height), winTitle(_title){
    sfWindow.create(sf::VideoMode(_width, _height), _title);

}
void Window::pollEvent(){
    std::logic_error("Window::pollEvent(): function not implemented.");
}

int Window::getWindowHeight() const {
    return winHeight;
}

int Window::getWindowWidth() const {
    return winWidth;
}

std::string Window::getWindowTitle() const {
    return winTitle;
}

void Window::setWindowBorderStyle(){
    std::logic_error("Window::pollEvent(): function not implemented.");
}

void Window::setFrameRateLimit(const unsigned int _frameRateLimit){
    frameRateLimit = _frameRateLimit;
}

int Window::getFrameRateLimit() const {
    return frameRateLimit;
}

void Window::setWindowBackgroundColor(const sf::Color& _bgColor){
    bgColor = _bgColor;
}