// Michelle A. Santiago
// Práctica 2
// 801 - 23 - 5483

#include "HourlyEmployee.h"

// constructor
HourlyEmployee::HourlyEmployee(const std::string& name, int id, double payPerHour, double workedHours) : Employee(name, "Hourly", id)
{
    this->payPerHour = payPerHour;
    this->workedHours = workedHours;
}
/*TODO: calculate Payment */

double HourlyEmployee::calculatePay () const {
    double hourly = getPayPerHour();
    double timeWorked = getWorkedHours();

    double pay = hourly * timeWorked;
    return pay;
}

// getters
double HourlyEmployee::getPayPerHour () const {
    return payPerHour;
}

double HourlyEmployee::getWorkedHours () const {
    return workedHours;
}