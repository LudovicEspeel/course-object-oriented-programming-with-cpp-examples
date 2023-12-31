#pragma once

#include <string>
using namespace std;

class Animal
{
    public:
        Animal(string food, int age);
        ~Animal();
        // some getters and setters ...
        string getString() const;
        string getSound() const;
    private:
        string food;
        int age;
};