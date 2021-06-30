#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Teacher : public Person {
private:
    int Experience;
    string Category;
    int Salary;
public:
    Teacher();
    Teacher(string FullName, string DayMonthYear, double Height, double Weight, GenderType Gender, string PhoneNumber, string Email, int Experience, string Category, int Salary);
    int PaymentCounting()const;
    int GetExperience()const;
    int GetSalary()const;
    int  VacationCounting(int NumberOfDays)const;
    friend ostream& operator<<(ostream& os, const Teacher& teacher);
};