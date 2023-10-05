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

    sf::RenderWindow window;
    sf::CircleShape  player;

};

#endif //MODELLING__GAME_H
