#pragma once
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Performer : public Person {
private:
    string Genre;
    int QuantityOfPerformances;
public:
    Performer();
    Performer(string FullName, string DayMonthYear, double Height, double Weight, GenderType Gender, string PhoneNumber, string Email, string Genre, int QuantityOfPerfomances);
    string GetGenre()const;
    void SetQuantityOfPerfomances(const int& NewQuantity);
    void SetPerformanceValue();
    void ChangeGenre(const string& AddGenre);
    friend ostream& operator<<(ostream& os, const Performer& performer);
};