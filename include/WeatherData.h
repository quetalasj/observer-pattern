//
// Created by quetalasj on 11.03.2022.
//

#ifndef OBSERVER_PATTERN_WEATHERDATA_H
#define OBSERVER_PATTERN_WEATHERDATA_H
#include "Subject.h"
#include "vector"
#include "memory"
#include "Observer.h"


class WeatherData: public Subject {
private:
    vector<shared_ptr<Observer>> observers;
    float temperature;
    float humidity;
    float pressure;
public:
    void registerObserver(const shared_ptr<Observer> &o) override;
    void removeObserver(const shared_ptr<Observer> &o) override;
    void notifyObservers() override;
    void measurementsChanged();
    void setMeasurements(float temperature, float humidity, float pressure);

};
#endif //OBSERVER_PATTERN_WEATHERDATA_H
