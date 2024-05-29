#ifndef GARAGE_H
#define GARAGE_H

#include "Car.h"
#include <vector>
#include <string>

class Garage {
private:
    std::vector<Car> m_cars;

public:
    Garage();

    void addCar(const Car& car);

    std::vector<Car> getCarsByMake(const std::string& make) const;

    std::vector<Car> getCarsByModelAndYears(const std::string& model, int years) const;

    std::vector<Car> getCarsByYearAndPrice(int year, double price) const;

    friend std::ostream& operator<<(std::ostream& os, const Garage& garage);

    void saveToFile(const std::string& filename) const;
};

#endif