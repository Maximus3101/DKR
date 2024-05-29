#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    int m_id;
    std::string m_make;
    std::string m_model;
    int m_year;
    std::string m_color;
    double m_price;
    std::string m_registrationNumber;

public:
    Car(int id, const std::string& make, const std::string& model, int year, const std::string& color, double price, const std::string& registrationNumber);

    // Getter methods
    int getId() const;
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    std::string getColor() const;
    double getPrice() const;
    std::string getRegistrationNumber() const;

    // Setter methods
    void setId(int id);
    void setMake(const std::string& make);
    void setModel(const std::string& model);
    void setYear(int year);
    void setColor(const std::string& color);
    void setPrice(double price);
    void setRegistrationNumber(const std::string& registrationNumber);

    std::string toString() const;
    friend std::ostream& operator<<(std::ostream& os, const Car& car);
};

#endif