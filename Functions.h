#pragma once
#include "Teacher.h"
#include "Performer.h"
#include "Functions.h"
#include <vector>
bool SortTeachArraySalary(const Teacher& TeachOneS, const Teacher& TeachTwoS);
bool SortTeachArray(const Teacher& TeachOne, const Teacher& TeachTwo);
void CountSalaryForTeacher(vector<Teacher>& VoidTeacherArray);
void CountVacationForTeacher(vector<Teacher>& VoidTeacherArray);
template <class T>
void ChangeNumber(vector<T>& TeacherOrPerformerArray, string NewValueToChangePhone, string CorrectName) {
    for (T& t : TeacherOrPerformerArray) {
        if (t.GetName() == CorrectName) {
            t.SetNewPhoneNum(NewValueToChangePhone);
        }
    }
}
template <class T>
void ChangeEmail(vector<T>& TeacherOrPerformerArray, string NewValueToChangeEmail, string CorrectName) {
    for (T& t : TeacherOrPerformerArray) {
        if (t.GetName() == CorrectName) {
            t.SetNewEmail(NewValueToChangeEmail);
        }
    }
}
void AddOneGradeToEachPerformer(vector<Performer>& VoidAddedArray);
void ChangeGenreVoid(vector<Performer>& ChangeGenreVoidArray,const string& VoidPerfName,const string&  NewVoidGenre);