#pragma once
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
#include "memory"
#include "WeatherData.h"

using namespace std;

class CurrentConditionsDisplay : public Observer, public DisplayElement,
        public enable_shared_from_this<Observer> {
private:
    float temperature{};
    float humidity{};
    WeatherData weatherData;
public:
    void subscribe(WeatherData& weatherData);
    void update(float temp, float humidity, float pressure) override;
    void display() const override;
};