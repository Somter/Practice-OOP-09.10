#include <iostream>
#include <string>   
#include "Human.h"
#include "University.h"

using namespace std;
class Student : public Human, public University {
public:
    Student() = default;
    Student(string n, int a, string u, string g, string as[]);  

    void Input();   
    void Print();   

private:
    string group;
    string assessments[10];
};
