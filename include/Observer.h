#pragma once
#include "memory"

class Observer {
public:
    virtual void update(float temp, float humidity, float pressure) {};
};

