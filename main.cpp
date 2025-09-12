// Michelle A. Santiago
// Práctica 2
// 801 - 23 - 5483

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

using namespace std;

// Reads CSV: ID,Name,Type,PayPerHour,WorkedHours,YearlyPayment
void readFile(const string& filename, vector<HourlyEmployee>& hourlyEmployees, vector<SalariedEmployee>& salariedEmployees) {
    ifstream file(filename);
    string line;

    // Read file with employees information
    while (getline(file, line)) {
        stringstream ss(line);
        string name, type, token;
        int id;
        double payPerHour = 0, workedHours = 0, yearlyPayment = 0;

        getline(ss, token, ','); id = stoi(token);
        getline(ss, name, ',');
        getline(ss, type, ',');
        getline(ss, token, ','); payPerHour = stod(token);
        getline(ss, token, ','); workedHours = stod(token);
        getline(ss, token, ','); yearlyPayment = stod(token);

        if (type == "Hourly") {
            hourlyEmployees.emplace_back(name, id, payPerHour, workedHours);
        } else if (type == "Salaried") {
            salariedEmployees.emplace_back(name, id, yearlyPayment);
        }
    }
}
// functions to display the information of the employees neatly
// i used regular for loops. i dont like ranged ones
void displayInfoHourly (vector<HourlyEmployee>& hourlyEmployees) {

    std:: cout << "Hourly Employees: " << endl;
    for (int i = 0; i < hourlyEmployees.size(); i++){
        std:: cout << "ID: " << hourlyEmployees[i].getID() << " | " << "Name: " << hourlyEmployees[i].getName() << " | " << "Pay this period: $" << hourlyEmployees[i].calculatePay() << endl;
    }
    std:: cout << endl;
}

void displayInfoSalaried (vector<SalariedEmployee>& salariedEmployees) {

    std:: cout << "Salaried Employees: " << endl;
    for (int i = 0; i < salariedEmployees.size(); i++){
        std:: cout << "ID: " << salariedEmployees[i].getID() << " | " << "Name: " << salariedEmployees[i].getName() << " | " << "Pay this period: $" << salariedEmployees[i].calculatePay() << endl;
    }
    std:: cout << endl;
}

int main() {
    
    /* TODO: Define two vectors: HourlyEmployee and SalariedEmployee */

    vector<HourlyEmployee> hourlyEmployeeslist;
    vector<SalariedEmployee> salariedEmployeeslist;

    // TODO: Add vectors to readFile call, hourly first
    readFile("employee_info.csv", hourlyEmployeeslist, salariedEmployeeslist);
    double result = 0;

    // TODO: Print the results
    // Remember that you can use the range based for loop
    // Display the results of each type of employee

    displayInfoHourly(hourlyEmployeeslist);
    displayInfoSalaried(salariedEmployeeslist);

    return 0;
}
