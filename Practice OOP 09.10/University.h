#pragma once
#include <iostream>
#include <string>
using namespace std;

class University {
protected:
    string universityName;

public:
    University() = default;
    University(string un);  

    void Input();
    void Print();
};

