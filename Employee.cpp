// Michelle A. Santiago
// Práctica 2
// 801 - 23 - 5483

#include "Employee.h"

// constructor

Employee::Employee(const std::string& n, const std::string& type, int id)
{
  // le estoy diciendo que asigne el parámetro recibido al atributo del objeto
  name = n;
  this->id = id;
  this->type = type;
}

/* IMPLEMENT GETTERS*/

std::string Employee:: getName() const {
  return name;
}

std::string Employee:: getType() const {
  return type;
}

int Employee:: getID() const {
  return id;
}