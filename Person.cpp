#include "Person.h"
ostream& operator<<(ostream& os, const GenderType& gender)
{
    switch (gender)
    {
    case GenderType::Nonbinary:
        os << "Nonbinary";
        break;
    case GenderType::Male:
        os << "Male";
        break;
    case GenderType::Female:
        os << "Female";
        break;
    }

    return os;
}

istream& operator>>(istream& is, GenderType& gender)
{
    int i;
    is >> i;
    if (i == 0) {
        gender =  GenderType::Male;

    }
    else if (i == 1) {
        gender = GenderType::Female;
    }
    else {
        gender = GenderType::Nonbinary;

    }
    return is;
}
Person::Person() {
    FullName = "NONE";
    DayMonthYear = "NONE";
    Height = 0;
    Weight = 0;
    Gender = GenderType::Nonbinary;
    PhoneNumber = "NONE";
    Email = "NONE";
}
Person::Person(string FullName, string DayMonthYear, double Height, double Weight, GenderType gender, string PhoneNumber, string Email) {
    this->FullName = FullName;
    this->DayMonthYear = DayMonthYear;
    this->Height = Height;
    this->Weight = Weight;
    this->Gender = gender;
    this->PhoneNumber = PhoneNumber;
    this->Email = Email;
    Error(Weight, Height);
}
bool Person::Error(double& Weight, double& Height) {
    if (Weight <= 23 || Weight >= 400) {
        throw invalid_argument("Weight is over the range");
    }
    else if (Height <= 50 || Height >= 290) {
        throw  invalid_argument("Height is over the range");
    }
    return 1;
}
bool Person::IsWeightOverTheRange()const {
    return Weight > 80;
}
bool Person::IsHeightOverTheRange()const {
    return Height > 150;
}

string Person::GetName()const {
    return FullName;
}

void Person::SetNewEmail(string& NewEmail) {
    Email = NewEmail;
}
void Person::SetNewPhoneNum(string& NewPhone) {
    PhoneNumber = NewPhone;
}
ostream& operator<<(ostream& os, const Person& person){
    os << "Name: " << person.FullName << "\n";
    os << "Date of birth: " << person.DayMonthYear << "\n";
    os << "Height: " << person.Height << "\n";
    os << "Weight: " << person.Weight << "\n";
    os << "Gender: " << person.Gender << "\n";
    os << "Phone number: " << person.PhoneNumber << "\n";
    os << "Email: " << person.Email << "\n";
    person.IsWeightOverTheRange();
    person.IsHeightOverTheRange();
    return os;
}