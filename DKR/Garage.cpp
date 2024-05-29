#include "Garage.h"
#include <algorithm>
#include <fstream>

Garage::Garage() {}

void Garage::addCar(const Car& car) {
    m_cars.push_back(car);
}

std::vector<Car> Garage::getCarsByMake(const std::string& make) const {
    std::vector<Car> result;
    for (const auto& car : m_cars) {
        if (car.getMake() == make) {
            result.push_back(car);
        }
    }
    return result;
}

std::vector<Car> Garage::getCarsByModelAndYears(const std::string& model, int years) const {
    std::vector<Car> result;
    for (const auto& car : m_cars) {
        if (car.getModel() == model && (2023 - car.getYear()) > years) {
            result.push_back(car);
        }
    }
    return result;
}

std::vector<Car> Garage::getCarsByYearAndPrice(int year, double price) const {
    std::vector<Car> result;
    for (const auto& car : m_cars) {
        if (car.getYear() == year && car.getPrice() > price) {
            result.push_back(car);
        }
    }
    return result;
}

std::ostream& operator<<(std::ostream& os, const Garage& garage) {
    for (const auto& car : garage.m_cars) {
        os << car << std::endl;
    }
    return os;
}

void Garage::saveToFile(const std::string& filename) const {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (const auto& car : m_cars) {
            std::string line = car.toString();
            // Просте XOR шифрування
            for (char& c : line) {
                c ^= 123;
            }
            file << line << std::endl;
        }
        file.close();
    }
}