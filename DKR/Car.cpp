#include "Car.h"
#include <iostream>

Car::Car(int id, const std::string& make, const std::string& model, int year, const std::string& color, double price, const std::string& registrationNumber)
    : m_id(id), m_make(make), m_model(model), m_year(year), m_color(color), m_price(price), m_registrationNumber(registrationNumber) {}

int Car::getId() const {
    return m_id;
}

std::string Car::getMake() const {
    return m_make;
}

std::string Car::getModel() const {
    return m_model;
}

int Car::getYear() const {
    return m_year;
}

std::string Car::getColor() const {
    return m_color;
}

double Car::getPrice() const {
    return m_price;
}

std::string Car::getRegistrationNumber() const {
    return m_registrationNumber;
}

void Car::setId(int id) {
    m_id = id;
}

void Car::setMake(const std::string& make) {
    m_make = make;
}

void Car::setModel(const std::string& model) {
    m_model = model;
}

void Car::setYear(int year) {
    m_year = year;
}

void Car::setColor(const std::string& color) {
    m_color = color;
}

void Car::setPrice(double price) {
    m_price = price;
}

void Car::setRegistrationNumber(const std::string& registrationNumber) {
    m_registrationNumber = registrationNumber;
}

std::string Car::toString() const {
    return "ID: " + std::to_string(m_id) +
        "\nMake: " + m_make +
        "\nModel: " + m_model +
        "\nYear: " + std::to_string(m_year) +
        "\nColor: " + m_color +
        "\nPrice: " + std::to_string(m_price) +
        "\nRegistration Number: " + m_registrationNumber;
}

std::ostream& operator<<(std::ostream& os, const Car& car) {
    os << car.toString() << std::endl;
    return os;
}