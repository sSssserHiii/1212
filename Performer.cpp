#include "Person.h"
#include "Performer.h"

    Performer::Performer(){
        Genre = "NONE";
        QuantityOfPerformances = 0;
    }
    Performer::Performer(string FullName, string DayMonthYear, double Height, double Weight, GenderType Gender, string PhoneNumber, string Email, string Genre, int QuantityOfPerfomances) :Person( FullName,  DayMonthYear,  Height,  Weight, Gender,  PhoneNumber,  Email) {
        this->Genre = Genre;
        this->QuantityOfPerformances = QuantityOfPerfomances;
    }
    string Performer::GetGenre()const {
        return Genre;
    }
    void Performer::SetQuantityOfPerfomances(const int& NewQuantity) {
        QuantityOfPerformances = NewQuantity;
    }
    void Performer::SetPerformanceValue() {
        const int PerformanceValue = 1;
        QuantityOfPerformances += PerformanceValue;
    }
    void Performer::ChangeGenre(const string& AddGenre) {
        Genre = AddGenre;
    }
     ostream& operator<<(ostream& os, const Performer& performer) {
        os << static_cast<const Person&>(performer);
        os << "Genre: " << performer.Genre << "\n";
        os << "Quantity of perfomances: " << performer.QuantityOfPerformances << "\n";
        return os;
    }