#include "Student.h"

Student::Student(string n, int a, string un, string g, string as[]) : Human(n, a), University(un) {    
    group = g;
    for (int i = 0; i < 10; i++) {
        assessments[i] = as[i];  
    }
}
 
void Student::Input() {
    Human::Input();
    University::Input();    
    cout << "Enter group: ";
    cin >> group;

    cout << "Enter assessments: ";
    for (int i = 0; i < 10; i++) {
        cout << i+1 << ": ";
        cin >> assessments[i];  
    }    
}

void Student::Print() 
{ 
    cout << "Group: " << group << endl;
    cout << "Assessments: ";
    for (int i = 0; i < 10; i++) {
        cout << assessments[i] << " ";
    }
    cout << endl;
    Human::Print();
    University::Print();
}
