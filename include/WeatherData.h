#pragma once
#include "Subject.h"
#include "list"
#include "memory"
#include "Observer.h"


class WeatherData: public Subject {
private:
    list<shared_ptr<Observer>> observers;
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

