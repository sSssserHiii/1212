#pragma once
#include "Functions.h"


bool SortTeachArraySalary(const Teacher& TeachOneS, const Teacher& TeachTwoS) {
    return TeachOneS.GetSalary() > TeachTwoS.GetSalary();
}
bool SortTeachArray(const Teacher& TeachOne, const Teacher& TeachTwo) {
    return TeachOne.GetExperience() > TeachTwo.GetExperience();
}
void CountSalaryForTeacher(vector<Teacher>& VoidTeacherArray) {
    string VoidName;
    cout << "Enter the teacher's name to do salary counting: ";
    cin >> VoidName;
    for (const Teacher& teacher : VoidTeacherArray) {
        if (teacher.GetName() == VoidName) {
            cout << teacher.PaymentCounting();
        }
    }
}
void CountVacationForTeacher(vector<Teacher>& VoidTeacherArray) {
    string TeachNameToCountVacation;
    cout << "Enter the teacher's name to do vacation counting: ";
    cin >> TeachNameToCountVacation;
    for (const Teacher& teacher : VoidTeacherArray) {
        if (teacher.GetName() == TeachNameToCountVacation) {
            int VacationDaysNumber;
            cout << "Enter number of days teacher'd like to stay on vacation: ";
            cin >> VacationDaysNumber;
            cout << teacher.VacationCounting(VacationDaysNumber);
        }
    }
}


void AddOneGradeToEachPerformer(vector<Performer>& VoidAddedArray) {
    for (Performer& p : VoidAddedArray) {
        p.SetPerformanceValue();
    }
}
void ChangeGenreVoid(vector<Performer>& ChangeGenreVoidArray, const string& VoidPerfName, const string& NewVoidGenre) {
    for (Performer& p : ChangeGenreVoidArray) {
        if (p.GetName() == VoidPerfName) {
            p.ChangeGenre(NewVoidGenre);
        }
    }
}
