#include "WeatherData.h"


using namespace std;

void WeatherData::registerObserver(const shared_ptr<Observer> &o) {
    observers.push_back(o);
}

void WeatherData::removeObserver(const shared_ptr<Observer> &o) {
    observers.remove(o);
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
