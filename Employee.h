// Parent Class Employee
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
// Attributes
protected:
    std::string name;
    int id;
    std::string type; // "Hourly" or "Salaried"

// Methods
public:
	// constructor
    Employee (std::string name; std::string type; int id, double payPerHour, double workedHours, double yearlyPayment);

    // default constructor
    Employee ();

    // destructor
    virtual ~Employee() {}

    // Virtual function to calculate payment
    virtual double calculatePay() const = 0;

    // getters
    std::string getName();
    std::string getType();
};

#endif

