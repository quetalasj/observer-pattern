#pragma once
#include "memory"
#include "Observer.h"

using namespace std;

class Subject {
public:
    virtual void registerObserver(const shared_ptr<Observer> &o) {};
    virtual void removeObserver(const shared_ptr<Observer> &o) {};
    virtual void notifyObservers() {};
};

