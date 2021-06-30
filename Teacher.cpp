
#include "Person.h"
#include "Teacher.h"


    Teacher::Teacher():Person(){
        Experience = 0;
        Category = "NONE";
        Salary = 0;
    }
    Teacher::Teacher(string FullName, string DayMonthYear, double Height, double Weight, GenderType Gender, string PhoneNumber, string Email, int Experience, string Category, int Salary):Person(FullName, DayMonthYear, Height, Weight, Gender, PhoneNumber, Email) {
        this->Experience = Experience;
        this->Category = Category;
        this->Salary = Salary;
    }
    int Teacher::PaymentCounting()const {
        int CountingValue = 0;
        int Surprise = 0, CategorySurprise = 0;
        if (Experience >= 8) {
            Surprise = 200;
        }
        else if (Category == "ArmedForces" || Category == "DisabledTeach" || Category == "Prisoners") {
            CategorySurprise = 500;
        }
        CountingValue = Salary + CategorySurprise + Surprise;
        return CountingValue;
    }
    int Teacher::GetExperience()const {
        return Experience;
    }
    int Teacher::GetSalary()const {
        return Salary;
    }
    int  Teacher::VacationCounting(int NumberOfDays)const {
        int ValueVacation = 0;
        ValueVacation = (PaymentCounting() / (NumberOfDays * 30));
        return ValueVacation;
    }
    ostream& operator<<(ostream& os, const Teacher& teacher) {
        os << static_cast<const Person&>(teacher);
        os << "Experience: " << teacher.Experience << "\n";
        os << "Category: " << teacher.Category << "\n";
        os << "Salary: " << teacher.Salary << "\n";
        os << "Payment: " << teacher.Salary << "\n";
        return os;
    }