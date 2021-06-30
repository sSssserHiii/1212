#if !defined(_PERSON_H_)
#define _PERSON_H_
#include <iostream>
#include <string>
using namespace std;

enum class GenderType { Nonbinary, Male, Female };
ostream& operator<<(ostream& os, const GenderType& gender);
istream& operator>>(istream& is, GenderType& gender);

class Person {
protected:
    string FullName;
    string DayMonthYear;
    double Height;
    double Weight;
    GenderType Gender;
    string PhoneNumber;
    string Email;
public:
    Person();
    Person(string FullName, string DayMonthYear, double Height, double Weight, GenderType gender, string PhoneNumber, string Email);
    string GetName()const;
    bool IsWeightOverTheRange()const;
    bool IsHeightOverTheRange()const;
    bool Error(double& Weight, double& Height);
    void SetNewEmail(string& NewEmail);
    void SetNewPhoneNum(string& NewPhone);
    friend ostream& operator<<(ostream& os, const Person& person);
};
#endif //_PERSON_H_