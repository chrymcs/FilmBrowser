#pragma once
#include <string>

using namespace std;

class Director {
    string name;
public:
    Director(string n) {
        name = n;
    }
    string getDirectorName() { return name; }
};