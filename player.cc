#include "player.h"

Player::Player() : shape(sf::Vector2f(100, 100)), rotation(0), isMoving(false) {
    shape.setFillColor(sf::Color::Yellow);
    shape.setOrigin(16, 16);
}

void Player::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(shape, states);
}

// TODO: i need the figure out this strange math...
void Player::update(const sf::Time delta_time) {
    float seconds = delta_time.asSeconds();

    if (rotation != 0) {
        float angle = rotation * 180 * seconds;
        shape.rotate(angle);
    }

    if (isMoving) {
        float angle = shape.getRotation() / 180 * M_PI - M_PI / 2;
        velocity = sf::Vector2f(std::cos(angle), std::sin(angle) * 60.f * seconds);

    }
    shape.move(velocity * seconds);
}

void Player::processEvents() {
    isMoving = sf::Keyboard::isKeyPressed(sf::Keyboard::Up);

    rotation = 0;
    rotation -= sf::Keyboard::isKeyPressed(sf::Keyboard::Left);
    rotation += sf::Keyboard::isKeyPressed(sf::Keyboard::Right);

}
