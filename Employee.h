// Michelle A. Santiago
// Práctica 2
// 801 - 23 - 5483

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
    Employee (const std::string& name, const std::string& type, int id);

    // default constructor
    // Employee ();
    // had to comment it out because it was giving me some trouble with the compiler

    // destructor
    virtual ~Employee() {}

    // Virtual function to calculate payment
    virtual double calculatePay() const = 0;

    // getters
    std::string getName() const;
    std::string getType() const;
    int getID() const;
};

#endif

