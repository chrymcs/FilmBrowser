#pragma once

class Actor {
    string name;
    public:
    Actor(string n) {
        name = n;
    }
    string getName() { return name; }
};