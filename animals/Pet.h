#pragma once
#include <string>

using namespace std;

class Pet
{
    public:
        Pet(string name, int age, string food);
        ~Pet();
        // some getters and setters ...
        string getString() const;
    private:
        string name;
        int age;
        string food;
};