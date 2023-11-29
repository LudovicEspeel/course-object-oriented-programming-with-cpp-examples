#pragma once
#include <string>

using namespace std;

class Cat
{
    public:
        Cat(string name, int age, string food);
        ~Cat();
        // some getters and setters ...
        string getString() const;
    private:
        string name;
        int age;
        string food;
        int numberOfLegs;
};