#include "University.h"

University::University(string un) : universityName(un) {}

void University::Input() {
    cout << "Enter university name: ";
    cin >> universityName;
}

void University::Print() {
    cout << "University: " << universityName << endl;
}
