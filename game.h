#ifndef MODELLING__GAME_H
#define MODELLING__GAME_H

#include <SFML/Graphics.hpp>

#include "player.h"

class Game {
public:
    Game operator=(const Game&) = delete;
    Game(const Game&) = delete;
    Game();
    void run(int minimum_frame_per_seconds);

private:
    void update(sf::Time delta_time);
    void processEvents();
    void render();

    sf::RenderWindow window;
    Player player;

};

#endif //MODELLING__GAME_H
