// Michelle A. Santiago
// Práctica 2
// 801 - 23 - 5483

#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"

// constructor and added methods
class HourlyEmployee : public Employee {
public:
    double payPerHour;
    double workedHours;

    HourlyEmployee(const std::string& name, int id, double payPerHour, double workedHours);

    double calculatePay() const override;
    double getPayPerHour() const;
    double getWorkedHours() const;
};

#endif

