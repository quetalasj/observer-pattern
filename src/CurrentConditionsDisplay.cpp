#include "CurrentConditionsDisplay.h"
#include "iostream"

using namespace std;

void CurrentConditionsDisplay::subscribe(WeatherData& weatherData) {
    this->weatherData = weatherData;
    weatherData.registerObserver(shared_from_this());
}

void CurrentConditionsDisplay::update(float temp, float humidity, float pressure) {
    this->temperature = temp;
    this->humidity = humidity;
    display();
}

void CurrentConditionsDisplay::display() const {
    cout << "Current conditions: " << temperature << "F degrees and " << humidity << "% humidity" << endl;
}