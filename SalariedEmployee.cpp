#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const std::string& name, int id, double yearlyPayment): Employee(name, id, "Salaried") 
{
    this->yearlyPayment = yearlyPayment;
}

/*TODO: calculate Payment */

double SalariedEmployee::calculatePay () {
    double yearly = getYearlyPayment();
    double biweekly = yearly / 26;
    return biweekly;
}

/* IMPLEMENT GETTERS*/

double SalariedEmployee:: getYearlyPayment() const {
    return yearlyPayment;
}