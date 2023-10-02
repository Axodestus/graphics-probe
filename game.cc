#include "game.h"

Game::Game() : _window(sf::VideoMode(1920, 1080), "test"), _player(150) {
    _player.setFillColor(sf::Color::Blue);
    _player.setPosition(10, 20);
}

void Game::run() {
    while (_window.isOpen()) {
        processEvents();
        update();
        render();
    }
}

void Game::update() {

}

void Game::processEvents() {
    sf::Event event {};
    while (_window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            _window.close();
            exit(0);
        }

        if (event.type == sf::Event::KeyPressed and
                event.key.code == sf::Keyboard::Escape) {
            _window.close();
            exit(0);
        }
    }
}

void Game::render() {
    _window.clear();
    _window.draw(_player);
    _window.display();
}

