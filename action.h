#ifndef MODELLING_ACTION_H
#define MODELLING_ACTION_H


class Action {

public:

    enum Type {
        RealTime = 1,
        Pressed  = 1 << 1,
        Released = 1 << 2
    };

    Action();
};

#endif //MODELLING_ACTION_H
