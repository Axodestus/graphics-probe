#ifndef MODELLING__PLAYER_H
#define MODELLING__PLAYER_H

#include <cmath>

#include <SFML/Graphics.hpp>

class Player : public sf::Drawable {
public:
    Player(const Player&) = delete;
    Player& operator=(const Player&) = delete;
    Player();

    // FIXME: Very strange and unsafe solution...
    template<typename ...Args>
    void setPosition(Args&& ...args) {
        shape.setPosition(std::forward<Args>(args) ...);
    }

    void update(sf::Time delta_time);
    void processEvents();

    bool isMoving;
    int rotation;

private:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    sf::RectangleShape shape;
    sf::Vector2f velocity;
};

#endif //MODELLING__PLAYER_H
