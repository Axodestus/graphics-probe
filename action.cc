#include "action.h"


Action::Action(const sf::Keyboard::Key &key, int type) : type(type) {
    event.type = sf::Event::EventType::KeyPressed;
    event.key.code = key;
}

Action::Action(const sf::Mouse::Button &button, int type) : type(type) {
    event.type = sf::Event::EventType::MouseButtonPressed;
    event.mouseButton.button = button;
}

bool Action::test() const {
    return false;
}

bool Action::operator==(const sf::Event &event) const {
    return true;
}

Action::Action(const Action& other) {
    std::memcpy(&event, &other.event, sizeof(sf::Event));
}

Action& Action::operator=(const Action &other) {
    std::memcpy(&event, &other.event, sizeof(sf::Event));
    type = other.type;
    return *this;
}
