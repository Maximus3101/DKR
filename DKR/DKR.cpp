#include "Garage.h"
#include "Logger.h"
#include <iostream>

int main() {
    Garage garage;

    // Creating cars
    Car car1(1, "Toyota", "Camry", 2019, "Black", 25000.0, "AB1234CD");
    Car car2(2, "Honda", "Civic", 2020, "Red", 22000.0, "EF5678GH");
    Car car3(3, "Toyota", "Corolla", 2015, "Silver", 18000.0, "IJ9101KL");

    // Adding cars to the garage
    garage.addCar(car1);
    garage.addCar(car2);
    garage.addCar(car3);

    // Logging important moments
    Logger logger("log.txt");
    logger.log("Cars added to the garage.");

    // Displaying all cars in the garage
    std::cout << "All cars in the garage:\n" << garage << std::endl;

    // Getting cars by make
    std::string make = "Toyota";
    std::cout << "Cars with make " << make << ":\n";
    std::vector<Car> carsByMake = garage.getCarsByMake(make);
    for (const auto& car : carsByMake) {
        std::cout << car << std::endl;
    }

    // Getting cars by model and years
    std::string model = "Camry";
    int years = 3;
    std::cout << "Cars with model " << model << " that have been in operation for more than " << years << " years:\n";
    std::vector<Car> carsByModelAndYears = garage.getCarsByModelAndYears(model, years);
    for (const auto& car : carsByModelAndYears) {
        std::cout << car << std::endl;
    }

    // Getting cars by year and price
    int year = 2019;
    double price = 20000.0;
    std::cout << "Cars with year " << year << " and price higher than " << price << ":\n";
    std::vector<Car> carsByYearAndPrice = garage.getCarsByYearAndPrice(year, price);
    for (const auto& car : carsByYearAndPrice) {
        std::cout << car << std::endl;
    }

    // Saving cars to a file
    garage.saveToFile("cars.txt");
    logger.log("Cars saved to file.");

    return 0;
}