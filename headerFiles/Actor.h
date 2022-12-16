#pragma once

class Actor {
    string name;
    public:
    Actor(string n) {
        name = n;
    }
    string getActorName() { return name; }
};