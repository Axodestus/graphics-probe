#include "game.h"

Game::Game() : _window(sf::VideoMode(1920, 1080), "test"), _player(150) {
    player.setFillColor(sf::Color::Blue);
    player.setPosition(10, 20);
}

void Game::run() {
    while (window.isOpen()) {
        processEvents();
        update();
        render();
    }
}

void Game::update() {

}

void Game::processEvents() {
    sf::Event event {};
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
            exit(0);
        }

        if (event.type == sf::Event::KeyPressed and
                event.key.code == sf::Keyboard::Escape) {
            window.close();
            exit(0);
        }
    }
}

void Game::render() {
    window.clear();
    window.draw(_player);
    window.display();
}

