#ifndef MODELLING_ACTION_H
#define MODELLING_ACTION_H

#include <iostream>
#include <cstring>

#include <SFML/Graphics.hpp>


class Action {

public:

    enum Type {
        RealTime = 1,
        Pressed  = 1 << 1,
        Released = 1 << 2
    };

    Action(const sf::Keyboard::Key& key, int type = Type::RealTime | Type::Pressed);
    Action(const sf::Mouse::Button& button, int type = Type::RealTime | Type::Pressed);
    Action(const Action& other);
    Action& operator=(const Action& other);

    bool operator==(const sf::Event& event) const;

    bool test() const;

private:
    friend class ActionTarget;

    sf::Event event;
    int type;
};

#endif //MODELLING_ACTION_H
