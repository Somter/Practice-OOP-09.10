#include "Human.h"

Human::Human(string n, int a) : name(n), age(a) {}

void Human::Input() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
}

void Human::Print() {
    cout << "Name: " << name << endl;   
    cout << "Age: " << age << endl;
}
