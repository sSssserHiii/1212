/*
1 Mark 07/09/99 190 89 1 088423283 markmark@gmail.com 2 IT 1500
2 Kate 30/09/44 166 65 0 050583882 katekate@gmail.com 40 ArmedForces 2000
3 Dan 22/19/56 170 96 1 055584320 dandan@gmail.com 23 Private 2000
4 Mary 04/04/77 162 64 0 048583821 marymary@gmail.com Math 16 1200
1 Stan 30/12/67 178 49 1 056324242 stanstan@gmail.com Comedy 1000
2 John 28/03/54 124 66 1 06464224 johnjohn@gmail.com Dancing 800
3 Ellesse 02/10/02 176 70 0 09254367 ellesseellesse@gmail.com ModernArt 1804
4 Alice 06/08/38 155 45 0 06715659 alicealice@gmail.com Opera 1100
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Person.h"
#include "Teacher.h"
#include "Performer.h"
#include "Functions.h"


int main() {
    vector<Teacher>  ATeacherArray;
    vector<Performer>  APerformerArray;
    string NamesOfEmp, DateOfTheirBirth, PhoneNums, Emails, TCategory, PGenre;
    int TeachSalary, PerfQuantOfPerfomances, ExperienceExist;
    double TheirHeight, TheirWeight;
    GenderType TheirGender;
    int SelectedChoice;
    cout << "$ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $" << endl;
    cout << "***********************************************************************" << endl;
    cout << "! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !" << endl;
    cout << "There are some operations under the performances and teachers data.\nProgramm will continue run till ZERO is pressed.\nSelect the presented offers down below: " << endl;
    cout << "! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !" << endl;
    do {
        try {
            cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
            cout << "Add teacher's data -> 1" << endl;
            cout << "Add performer's data  -> 2" << endl;
            cout << "Count teachers salary -> 3 (Only for teachers)" << endl;
            cout << "Count teachers vacation -> 4 (Only for teachers)" << endl;
            cout << "Change genre -> 5 (Only for performancers)" << endl;
            cout << "Change number -> 6" << endl;
            cout << "Change Email -> 7" << endl;
            cout << "Add Quantity of performance -> 8" << endl;
            cout << "Return all data -> 9" << endl;
            cout << "Return data of choosen performance gener -> 10" << endl;
            cout << "Sort and Return teachers experience data -> 11" << endl;
            cout << "Return the highest treacher's salary -> 12" << endl;
            cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
            cout << "Enter your choice: ";
            cin >> SelectedChoice;
            cout << endl;
            switch (SelectedChoice) {
            case 1:
                cout << "Entering Teachers data: " << endl;
                cout << "Name: ";
                cin >> NamesOfEmp;
                cout << endl;
                cout << "Day month and year of birth: ";
                cin >> DateOfTheirBirth;
                cout << endl;
                cout << "Heihgt: ";
                cin >> TheirHeight;
                cout << endl;
                cout << "Weight: ";
                cin >> TheirWeight;
                cout << endl;
                cout << "Gender(Male - 1, Female - 0): ";
                cin >> TheirGender;
                cout << endl;
                cout << "Phonenumber: ";
                cin >> PhoneNums;
                cout << endl;
                cout << "Email: ";
                cin >> Emails;
                cout << endl;
                cout << "Experience: ";
                cin >> ExperienceExist;
                cout << endl;
                cout << "Category: ";
                cin >> TCategory;
                cout << endl;
                cout << "Salary: ";
                cin >> TeachSalary;
                cout << endl;
                ATeacherArray.emplace_back(NamesOfEmp, DateOfTheirBirth, TheirHeight,
                    TheirWeight, TheirGender, PhoneNums, Emails, ExperienceExist, TCategory, TeachSalary);
                break;
            case 2:
                cout << "Entering performers data: " << endl;
                cout << "Name: ";
                cin >> NamesOfEmp;
                cout << endl;
                cout << "Day month and year of birth: ";
                cin >> DateOfTheirBirth;
                cout << endl;
                cout << "Heihgt: ";
                cin >> TheirHeight;
                cout << endl;
                cout << "Weight: ";
                cin >> TheirWeight;
                cout << endl;
                cout << "Gender: ";
                cin >> TheirGender;
                cout << endl;
                cout << "Phonenumber: ";
                cin >> PhoneNums;
                cout << endl;
                cout << "Email: ";
                cin >> Emails;
                cout << endl;
                cout << "Genre: ";
                cin >> PGenre;
                cout << endl;
                cout << "Quantity of perfomances: ";
                cin >> PerfQuantOfPerfomances;
                cout << endl;
                APerformerArray.emplace_back(NamesOfEmp, DateOfTheirBirth, TheirHeight, TheirWeight, TheirGender, PhoneNums, Emails, PGenre, PerfQuantOfPerfomances);
                break;
            case 3:
            {
                CountSalaryForTeacher(ATeacherArray);
                break;
            }
            case 4:
            {
                CountVacationForTeacher(ATeacherArray);
                break;
            }
            case 5:
            {
                string NameToChangeGenre;
                cout << "Enter the performer's name to change genre: ";
                cin >> NameToChangeGenre;
                string NewGener4Performer;
                cout << "Enter new gener: ";
                cin >> NewGener4Performer;
                ChangeGenreVoid(APerformerArray,NameToChangeGenre,NewGener4Performer);

                break;
            }
            case 6:
            {
                string NameToChangeNumberForTeach;
                string CorrectArrayToSearch;
                cout << "Enter correct occupation: ";
                cin >> CorrectArrayToSearch;
                if (CorrectArrayToSearch == "teacher" || CorrectArrayToSearch == "Teacher") {
                    cout << "Enter the teacher's name to change Phnumber: ";
                    cin >> NameToChangeNumberForTeach;
                    string NewNumber4Teacher;
                    cout << "Enter new number: ";
                    cin >> NewNumber4Teacher;
                    ChangeNumber(ATeacherArray, NewNumber4Teacher, NameToChangeNumberForTeach);
                }
                else if (CorrectArrayToSearch == "performer" || CorrectArrayToSearch == "Performer") {
                    string NameToChangeNumber;
                    cout << "Enter the performer's name to change Phnumber: ";
                    cin >> NameToChangeNumber;
                    string NewNumber4Performer;
                    cout << "Enter new number: ";
                    cin >> NewNumber4Performer;
                    ChangeNumber(APerformerArray, NewNumber4Performer, NameToChangeNumber);
                }
                break;
            }
            case 7:
            {
                string OccupationForSearch;
                cout << "Enter correct occupation: ";
                cin >> OccupationForSearch;
                if (OccupationForSearch == "teacher" || OccupationForSearch == "Teacher") {
                    string NameToChangeEmailForTeach;
                    cout << "Enter the teacher's name to change Email: ";
                    cin >> NameToChangeEmailForTeach;
                    string NewEmail4Teacher;
                    cout << "Enter new Email: ";
                    cin >> NewEmail4Teacher;
                    ChangeEmail(ATeacherArray, NewEmail4Teacher, NameToChangeEmailForTeach);
                }
                else if (OccupationForSearch == "performer" || OccupationForSearch == "Performer") {
                    string NameToChangeEmailForPerf;
                    cout << "Enter the performer's name to change Email: ";
                    cin >> NameToChangeEmailForPerf;
                    string NewEmail4Performer;
                    cout << "Enter new Email: ";
                    cin >> NewEmail4Performer;
                    ChangeEmail(APerformerArray, NewEmail4Performer, NameToChangeEmailForPerf);
                }
                break;
            }
            case 8:
            {
                AddOneGradeToEachPerformer(APerformerArray);
                break;
            }
            case 9:
            {
                cout << "Perfomancer's data:" << endl;
                for (const Performer& performer : APerformerArray) {
                    cout << performer<<"\n";
                    performer.IsWeightOverTheRange();
                    performer.IsHeightOverTheRange();
                }
                cout << "Teacher's data:" << endl;
                for (const Teacher& teacher : ATeacherArray) {
                    cout << teacher << "\n";
                    teacher.IsWeightOverTheRange();
                    teacher.IsHeightOverTheRange();
                }
                break;
            }
            case 10:
            {
                string SearchedGener;
                cout << "Enter gener you'd like to search ";
                cin >> SearchedGener;
                for (Performer& performer : APerformerArray) {
                    if (performer.GetGenre() == SearchedGener) {
                        cout << performer << "\n";
                    }
                }
                break;
            }
            case 11:
                sort(ATeacherArray.begin(), ATeacherArray.end(), SortTeachArray);
                for (const Teacher& teacher : ATeacherArray) {
                    cout << teacher << endl;
                }
                break;
            case 12:
                sort(ATeacherArray.begin(), ATeacherArray.end(), SortTeachArraySalary);
                cout << ATeacherArray[0] << endl;
                break;
            default:
                cout << SelectedChoice << " Is not a valid menu item.\n";
                cout << endl;
            }
        }
        catch (const exception& error) { cerr << "Error: " << error.what() << endl; }
    } while (SelectedChoice != 0);
    cout << "The end of process" << endl;
    cout << "***********************************************************************" << endl;
    cout << "$ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $" << endl;
    return 0;
}