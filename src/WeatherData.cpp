//
// Created by quetalasj on 11.03.2022.
//
#include "WeatherData.h"

using namespace std;

void WeatherData::registerObserver(const shared_ptr<Observer> &o) {
    observers.push_back(o);
}

void WeatherData::removeObserver(const shared_ptr<Observer> &o) {
    for(int i=0; i < static_cast<int>(observers.size()); i++) {
        if (&observers[i] == &o) {
            observers.erase(observers.begin() + i);
            break;
        }
    }
}

void WeatherData::notifyObservers() {
    for (auto observer : observers) {
        observer->update(temperature, humidity, pressure);
    }
}


void WeatherData::measurementsChanged() {
    notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure) {
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementsChanged();
}
