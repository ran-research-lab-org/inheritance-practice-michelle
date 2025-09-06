#include "Employee.h"

Employee::Employee(const std::string& name, int id, const std::string& type, double payPerHour, double workedHours, double yearlyPayment)
{
  // le estoy diciendo que asigne el parámetro recibido al atributo del objeto
  this->name = name;
  this->id = id;
  this->type = type;
  
  this->workedHours = workedHours;
  this->payPerHour = payPerHour;
  this->yearlyPayment = yearlyPayment;
}

/* IMPLEMENT GETTERS*/

std::string Employee:: getName() const {
  return name;
}

std::string Employee:: getType() const {
  return type;
}