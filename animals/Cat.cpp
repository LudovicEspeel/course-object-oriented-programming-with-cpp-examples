#include "Cat.h"
#include <iostream>
#include <sstream>

using namespace std;

Cat::Cat(string name, int age, string food) : name(name), age(age), food(food), numberOfLegs(4)
{
}

Cat::~Cat()
{
    cout << "Destroying a Cat" << endl;
}

string Cat::getString() const
{
    stringstream ss;
    ss << "Cat food: " << food << ", name: " << name << ", age: " << age << " years" << ", number of legs: " << numberOfLegs;
    return ss.str();
}

string Cat::getSound() const
{
    return "Miauw!!!";
}