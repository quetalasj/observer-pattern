//
// Created by quetalasj on 11.03.2022.
//

#ifndef OBSERVER_PATTERN_SUBJECT_H
#define OBSERVER_PATTERN_SUBJECT_H
#include "memory"
#include "Observer.h"

using namespace std;

class Subject {
public:
    virtual void registerObserver(const shared_ptr<Observer> &o) {};
    virtual void removeObserver(const shared_ptr<Observer> &o) {};
    virtual void notifyObservers() {};
};

#endif //OBSERVER_PATTERN_SUBJECT_H
