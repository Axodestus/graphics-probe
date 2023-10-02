#ifndef MODELLING__GAME_H
#define MODELLING__GAME_H

#include <SFML/Graphics.hpp>

class Game {
public:
    Game operator=(const Game&) = delete;
    Game(const Game&) = delete;
    Game();
    void run();

private:
    void update();
    void processEvents();
    void render();

    sf::RenderWindow _window;
    sf::CircleShape _player;

};

#endif //MODELLING__GAME_H
