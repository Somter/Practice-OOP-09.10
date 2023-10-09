#pragma once
#include <iostream>
#include <string>	
using namespace std;	
class Human{
protected:
    string name;
    int age;

public:
    Human() = default;
    Human(string n, int a);

    void Input();
    void Print();
};

