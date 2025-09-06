#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const std::string& name, int id, double payPerHour, double workedHours) : Employee(name, id, "Hourly")
{
    this->payPerHour = payPerHour;
    this->workedHours = workedHours;
}
/*TODO: calculate Payment */

double HourlyEmployee::calculatePay () {
    double hourly = getPayPerHour();
    double timeWorked = getWorkedHours();

    double pay = hourly * timeWorked;
    return pay;
}

double HourlyEmployee::getPayPerHour () {
    return payPerHour;
}

double HourlyEmployee::getWorkedHours () {
    return workedHours;
}