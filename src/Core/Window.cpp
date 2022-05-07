#include <include/Core/Window.hpp>

Window::Window(const int width, const int height, const std::string& title): winWidth(width), winHeight(height), winTitle(title){
    sfWindow.create(sf::VideoMode(width, height), title);
    // BOOST_LOG_TRIVIAL(trace)<<"Window::Window()): window created.";
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

void Window::setWindowBorderStyle();
void Window::setFrameRateLimit();
int Window::getFrameRateLimit();