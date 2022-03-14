#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "memory"

using namespace std;

class WeatherStation {
public:
    static void main() {
        WeatherData weatherData;
        shared_ptr<CurrentConditionsDisplay> currentDisplay = std::make_shared<CurrentConditionsDisplay>();
        currentDisplay->subscribe(weatherData);
        weatherData.setMeasurements(80, 65, 30.4f);
        weatherData.setMeasurements(82, 70, 29.2f);
        weatherData.setMeasurements(78, 90, 29.2f);
    }
};

int main() {
    WeatherStation::main();
    return 0;
}
