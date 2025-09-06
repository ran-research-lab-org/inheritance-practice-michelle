#include "Employee.h"

Employee::Employee(const std::string& name, const std::string& type, int id)
{
  // le estoy diciendo que asigne el parámetro recibido al atributo del objeto
  this->name = name;
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