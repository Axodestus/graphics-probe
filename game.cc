#include "game.h"

Game::Game() : window(sf::VideoMode(1920, 1080), "test"), player() {
    //player.setFillColor(sf::Color::Blue);
    player.setPosition(100, 100);
}

void Game::run(int minimum_frame_per_seconds) {
    sf::Clock clock;
    sf::Time time_since_last_update;
    sf::Time time_per_frame = sf::seconds(1.f / minimum_frame_per_seconds);

    while (window.isOpen()) {
        processEvents();

        time_since_last_update = clock.restart();

        while (time_since_last_update > time_per_frame) {
            time_since_last_update  -= time_per_frame;
            update(time_per_frame);
        }
        update(time_since_last_update);
        render();
    }
}

void Game::update(sf::Time delta_time) {
    player.update(delta_time);
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

    player.processEvents();
}

void Game::render() {
    window.clear();
    window.draw(player);
    window.display();
}

