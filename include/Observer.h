//
// Created by quetalasj on 11.03.2022.
//

#ifndef OBSERVER_PATTERN_OBSERVER_H
#define OBSERVER_PATTERN_OBSERVER_H
class Observer {
public:
    virtual void update(float temp, float humidity, float pressure) {};
};
#endif //OBSERVER_PATTERN_OBSERVER_H
